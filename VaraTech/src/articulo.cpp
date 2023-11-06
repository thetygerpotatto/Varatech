#include "Articulo.h"
#include <iostream>

using namespace std;

Articulo::Articulo()
{
    name = "-";
    is_avaiable = is_new = true;
}

Articulo::Articulo(long P_id, std::string name, int price, int quantities, bool is_avaiable, bool is_new)
{
    this->P_id = P_id;
    this->price = price;
    this->quantities = quantities;
    this->name = name;
    this->is_avaiable = is_avaiable;
    this->is_new = is_new;
}

Articulo::~Articulo()
{
    //dtor
}


long Articulo::GetP_id() {
    return this->P_id;
}

void Articulo::setP_id(long id) {
    this->P_id = id;
}

std::string Articulo::Get_name()
{
    return name;
}

void Articulo::Set_name(std::string name)
{
    this->name = name;
}

int Articulo::Get_price()
{
    return this->price;
}

void Articulo::Set_price(int price)
{
    this->price = price;
}

int Articulo::Get_quantities()
{
    return this->quantities;
}

void Articulo::Set_quantities(int quantities)
{
    this->quantities = quantities;
}

bool Articulo::Get_is_avaiable()
{
    return is_avaiable;
}

void Articulo::Set_is_avaiable(short av)
{
    if (av == 0) {
        is_avaiable = false;
    }
    else {
        is_avaiable = true;
    }
}

bool Articulo::Get_is_new()
{
    return is_new;
}

void Articulo::Set_is_new(short ne)
{
    if (ne == 0) {
        is_new = false;
    }
    else {
        is_new = true;
    }
}
