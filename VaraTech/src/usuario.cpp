#include "usuario.h"
#include <iostream>

usuario::usuario()
{
    //ctor
}

usuario::~usuario()
{
    //dtor
}

long usuario::GetCD() {
    return CD;
}

void usuario::SetCD(long val) {
    CD = val;
}

std::string usuario::Getname() {
    return name;
}

void usuario::Setname(std::string val) {
    name = val;
}
