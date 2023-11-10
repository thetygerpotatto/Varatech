#include "datos.h"
#include<iostream>
using namespace std;

Datos::Datos()
{
    nombre = apellido = "";

}

Datos::~Datos()
{
    //dtor
}

void Datos::SetDatos(string mensaje){
    cout<<mensaje<<endl<<endl;
    cout<<"Ingrese su apellido: "<<endl;
    cin>>apellido;
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nombre;


}
string Datos::GetDatos(){
    return apellido + "/" + nombre;
}
