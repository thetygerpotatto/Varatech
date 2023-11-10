#include "administrador.h"
#include<iostream>
using namespace std;

Administrador::Administrador()
{
    cod_seguridad, codigoID = 0;
}

Administrador::~Administrador()
{
    //dtor
}

void Administrador::Setcod_seguridad(){
    cout<<"Ingrese su codigo de seguridad: "<<endl;
    cin>>cod_seguridad;
}

void Administrador::SetcodigoID(){
    cout<<"Ingrese su codigo de ID: "<<endl;
    cin>>codigoID;
}
void Administrador::Setdatos_admin(){
    fflush(stdin);
    datos_admin.SetDatos("Ingrese nombre y apellido del administrador\n");
}

long Administrador::Getcod_seguridad(){
    return cod_seguridad;
}

long Administrador::GetcodigoID(){
    return codigoID;
}
string Administrador::Getdatos_admin(){
    return datos_admin.GetDatos();
}
