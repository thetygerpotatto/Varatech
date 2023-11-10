#include "gerente.h"
#include<iostream>
using namespace std;

Gerente::Gerente()
{
    area = "";
    code_ID = 0;
}
Gerente::~Gerente()
{
    //dtor
}

void Gerente::Setarea(){
    fflush(stdin);
    cout<<"Ingrese el area a la que pertenece: "<<endl;
    getline(cin, area);
}

void Gerente::Setcode_ID(){
    cout<<"Ingrese su codigo de ID: "<<endl;
    cin>>code_ID;
}

void Gerente::Setdatos_gerente(){
    fflush(stdin);
    datos_gerente.SetDatos("Ingrese nombre y apellido del gerenten");
}

string Gerente::Getarea(){
    return area;
}

long Gerente::Getcode_ID(){
    return code_ID;
}

string Gerente::Getdatos_gerente(){
    return datos_gerente.GetDatos();
}
