#include "Articulo.h"
#include <iostream>

using namespace std;

Article::Article()
{
    name = "-";
    isAvaiable = isNew = true;
}

Article::Article(long ID, std::string name, int price, int quantities, bool isAvaiable, bool isNew)
{
    this->ID = ID;
    this->price = price;
    this->quantities = quantities;
    this->name = name;
    this->isAvaiable = isAvaiable;
    this->isNew = isNew;
}

Article::~Article()
{
    //dtor
}


long Article::GetId() {
    return this->ID;
}

void Article::SetId(long id) {
    this->ID = id;
}

std::string Article::GetName()
{
    return name;
}

void Article::SetName(std::string name)
{
    this->name = name;
}

int Article::GetPrice()
{
    return this->price;
}

void Article::SetPrice(int price)
{
    this->price = price;
}

int Article::GetQuantities()
{
    return this->quantities;
}

void Article::SetQuantities(int quantities)
{
    this->quantities = quantities;
}

bool Article::GetIsAvaiable()
{
    return isAvaiable;
}

void Article::SetIsAvaiable(short av)
{
    if (av == 0) {
        isAvaiable = false;
    }
    else {
        isAvaiable = true;
    }
}

bool Article::GetIsNew()
{
    return isNew;
}

void Article::SetIsNew(short ne)
{
    if (ne == 0) {
        isNew = false;
    }
    else {
        isNew = true;
    }
}
