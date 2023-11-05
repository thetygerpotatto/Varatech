#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>


#include <usuario.h>
#include <admin.h>
#include <seller.h>

std::vector<User*> users;

void read_database();

int main()
{
    read_database();
    for (int i = 0; i < users.size(); i++) {
        std::cout << "CD: " << users[i]->GetCD() << " contraseña: " << users[i]->Getpassword() << " nombre: " << users[i]->Getname() << " apellido: " << users[i]->Getlast_name() << " direccion: " << users[i]->Getaddress() << " estado: " << users[i]->Getstatus() << " nivel de privilegio: " << users[i]->getPrivillege() << std::endl;
    }
    return 0;
}

void read_database() {
    std::ifstream InputFile;
    InputFile.open("C:\\dev\\Varatech\\VaraTech\\db\\Users.csv");

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
            case Privilege::none:
                {
                    u = new User(CD, password, name, last_name, address, status, UserPrivilege);
                }break;

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
}

