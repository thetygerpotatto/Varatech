#include "usuario.h"
#include <iostream>

User::User()
{
    name = last_name = password = address = "-";
    status = true;
    UserPrivilege = Privilege::none;
}


User::~User()
{
    //dtor
}

long User::GetCD() {
    return CD;
}

void User::SetCD(long val) {
    CD = val;
}

std::string User::Getname() {
    return name;
}

void User::Setname(std::string val) {
    name = val;
}

std::string User::Getlast_name() {
    return last_name;
}

void User::Setlast_name(std::string val) {
    last_name = val;
}

void User::Setaddress(std::string val) {
    address = val;
}

std::string User::Getaddress() {
    return address;
}

void User::Setpassword(std::string val) {
    password = val;
}

std::string User::Getpassword() {
    return password;
}

bool User::Getstatus() {
    return status;
}

void User::togleStatus(short val) {
    if (val == 0) {
        status = false;
    }
    else {
        status = true;
    }
}

Privilege User::getPrivillege() {
    return UserPrivilege;
}
