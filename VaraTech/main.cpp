#include <iostream>
#include <vector>
#include <fstream>
#include <ostream>
#include <sstream>
#include <cstdlib>

#include <usuario.h>
#include <admin.h>
#include <seller.h>
#include <articulo.h>

using namespace std;

User *Actual_user;
std::vector<User*> users;
std::vector<Article*> articles;
std::vector<User*> vec_gerente;

void read_database();
void write_database();
void show_user_database();
void list_users();
void login();
int validate_login(long, std::string);
void menu_admin();

void read_database() {

    //lectura de los usario de la base de datos
    std::ifstream InputFile;
    InputFile.open("db/Users.csv");

    std::string line;
    while(std::getline(InputFile, line)) {

        long CD;
        std::string password;
        std::string name;
        std::string last_name;
        std::string address;

        bool status;
        Privilege UserPrivilege;
        std::string tempString;

        std::stringstream inputString(line);
        std::getline(inputString, tempString, ',');
        CD = stol(tempString);
        std::getline(inputString, password, ',');
        std::getline(inputString, name, ',');
        std::getline(inputString, last_name, ',');
        std::getline(inputString, address, ',');

        std::getline(inputString, tempString, ',');
        status = (bool)stoi(tempString);

        std::getline(inputString, tempString, ',');
        UserPrivilege = (Privilege)stoi(tempString);
        User *u;

        switch (UserPrivilege) {
            case Privilege::seller:
                {
                    u = new Seller(CD, password, name, last_name, address, status, UserPrivilege);
                }break;

            case Privilege::admin:
                {
                    u = new Admin(CD, password, name, last_name, address, status, UserPrivilege);
                }break;
        }
        users.push_back(u);
        line = "";
    }
    InputFile.close();

    // lectura de articulos

    InputFile.open("db/Articles.csv");
    while(std::getline(InputFile, line)) {
        long id;
        std::string name;
        int price;
        int quantities;
        bool is_aviable;
        bool is_new;
        std::string tempString;

        std::stringstream InputString(line);
        std::getline(InputString, tempString,',');
        id = stol(tempString);

        std::getline(InputString, name, ',');

        std::getline(InputString, tempString, ',');
        price = stoi(tempString);

        std::getline(InputString, tempString, ',');
        quantities = stoi(tempString);

        std::getline(InputString, tempString, ',');
        is_aviable = (bool)stoi(tempString);

        std::getline(InputString, tempString, ',');
        is_new = (bool)stoi(tempString);

        Article* art = new Article(id, name, price, quantities, is_aviable, is_new);
        articles.push_back(art);
    }
}

void show_user_database() {
    system("cls");//limpia pantalla;
    for (int i = 0; i < users.size(); i++) {
            string priv;
            users[i]->GetPrivillege() == 1 ? priv = "Vendedor " : priv = "Administrador ";
            std::cout << "CD: " << users[i]->GetCC() << " Nombre: " << users[i]->GetName()
                      << " Apellido " << users[i]->GetLastName() << " Estado: " << users[i]->GetStatus() << " Tipo de usuario: " << priv << "\n\n";
    }
    system("pause");
}

//Funcion parar guardar los usuarios y los ariculos
void write_database() {
    std::ofstream OutputFile;
    OutputFile.open("db/Users.csv");
    for (int i = 0; i < users.size(); i++) {
        OutputFile << users[i]->GetCC() << "," << users[i]->GetPassword() << "," << users[i]->GetName() << ","
                   << users[i]->GetLastName() << "," << users[i]->GetAddress() << "," << users[i]->GetStatus() << ","
                   << users[i]->GetPrivillege() << "\n";
    }
    OutputFile.close();

    //Escritura de articulos
    OutputFile.open("db/Articles.csv");
    for (int i = 0; i < articles.size(); i++) {
        OutputFile << articles[i]->GetId() << "," << articles[i]->GetName() << "," << articles[i]->GetPrice() << ","
                   << articles[i]->GetQuantities() << "," << articles[i]->GetIsAvaiable() << "," << articles[i]->GetIsNew() << "\n";
    }
    OutputFile.close();
}


void list_users()
{
    long search_;
    bool search_result = false;

    while (search_result == false)
    {
        cout<<"Ingrese un id de usuario para buscar (C.C)"<<endl;
        cin>>search_;

        for (int i = 0; i < users.size(); i++) {

            if (search_ == users[i]->GetCC()){

                std::cout << "CC: " << users[i]->GetCC() <<" nombre: " << users[i]->GetName() << " apellido: " << users[i]->GetLastName()
                          << " direccion: " << users[i]->GetAddress() << " estado: " << users[i]->GetStatus()
                          << " nivel de privilegio: " << users[i]->GetPrivillege() << std::endl;
                search_result = true;
                break;
            }
        }

        if (search_result == false){

            cout<<"no se encontro el usuario"<<endl<<"desea buscar otro usuario?, Y/N"<<endl;
            fflush(stdin);

            char continue_;
            std::cin >> continue_;
            continue_ = std::toupper(continue_);
            if(continue_ == 'y'){
                continue;
                }
            if(continue_ == 'N'){
                search_result = true;
                break;
            }
        }
    }
}

bool look_for_privilege()
{

}


void read_user(){

    long new_cd;
    string new_password;
    string new_name;
    string new_last_name;
    string new_address = "-";
    bool new_status = true;
    int p;
    Privilege new_privilege;

    system("cls"); //LIMPIAR PANTALLA
    cout<<"Ingresar un nuevo usuario"<<endl<<endl;

    cout<<"Ingresar cedula"<<endl;
    cin>> new_cd;
    std::fflush(stdin);

    cout<<"Ingresar nombre"<<endl;
    cin >> new_name;
    std::fflush(stdin);

    cout<<"Ingresar apellido"<<endl;
    cin>>new_last_name;
    std::fflush(stdin);

    cout<<"Ingresar contraseña"<<endl;
    cin >> new_password;
    std::fflush(stdin);


    cout<<"ingrese nivel de prioridad de nuevo usuario(1- Vendedor ,2-Admin)"<<endl;
    cin>>p;
    std::fflush(stdin);
    new_privilege = static_cast<Privilege>(p);

    User *NewUser;
    switch (new_privilege) {
        case Privilege::admin:
            NewUser = new Admin(new_cd, new_password, new_name, new_last_name, new_address, new_status, new_privilege);
            break;
        case Privilege::seller:
            NewUser = new Seller(new_cd, new_password, new_name, new_last_name, new_address, new_status, new_privilege);
    }

    users.push_back(NewUser);
    system("pause");
    system("cls");
}



void listado_datos_Admin(){
    system("cls");
    int tam = users.size();
    string texto = "Cantidad de Usuarios listados [" + to_string(tam) + "]";
    cout<<texto<<endl<<endl;

}

void menu_admin(){
    int opc;
    do{
        cout<<"1. Registrar Usuario\n";
        cout<<"2. Listar datos de usuarios\n";
        cout<<"3. Buscar usuario(id)\n";
        cout<<"4. Añadir Articulo\n";
        cout<<"5. listar Articulos\n";
        cout<<"0. Salir\n";
        cout<<"Seleccione una opcion: ";

        cin>>opc;

        switch(opc){
            case 1: read_user();break;
            case 2: show_user_database(); break;
            case 3: list_users(); break;
            case 0: break;
            default:
                cout<<"Opcion incorrecta";
        }

    }while(opc!=0);
}

void login() {
    read_database();
    bool loop  = true;
    long CC;
    std::string password;
    do{
        cout<<"Sistema de logueo de la tienda Varatech\n";
        std::cout <<"Ingrese su CC: ";
        cin>>CC;

        std::cout <<"Ingrese su contraseña: ";
        std::fflush(stdin);
        std::getline(std::cin, password);

        int userIndex = validate_login(CC, password);
        if (userIndex != -1) {
            system("cls");
            Actual_user = users[userIndex];
            menu_admin();

            cout<<"1- para entrar con otro usuario \n 0- para salir\n";
            std::cin >> loop;

            system("cls");
        }
        else {
            cout<<"Contraseña o nombre de usuario incorrectos\n";
            system("pause");
            system("cls");
        }


    }while(loop);
    write_database();
}

int validate_login(long CC, std::string password) {

    for (int i = 0; i < users.size(); i++) {
        if (users[i]->GetCC() == CC && users[i]->GetPassword() == password) {
            return i;
        }
    }
    return -1;
}


int main()
{

    login();

    return 0;

}

