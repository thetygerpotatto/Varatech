#include "usuario.h"
#include <iostream>

User::User()
{
    name = last_name = password = address = "-";
    status = true;
    UserPrivilege = Privilege::none;
}

User::User(long CDa, std::string pssd, std::string nm, std::string lsnm, std::string addr, bool st, Privilege p)
{
    CC = CDa;
    name = nm;
    last_name = lsnm;
    password = pssd;
    address = addr;
    status = st;
    UserPrivilege = p;
}



User::~User()
{
    //dtor
}


long User::GetCC() {
    return CC;
}

void User::SetCC(long val) {
    CC = val;
}

std::string User::GetName() {
    return name;
}

void User::Setname(std::string val) {
    name = val;
}

std::string User::GetLastName() {
    return last_name;
}

void User::SetLastName(std::string val) {
    last_name = val;
}

void User::SetAddress(std::string val) {
    address = val;
}

std::string User::GetAddress() {
    return address;
}

void User::SetPassword(std::string val) {
    password = val;
}

std::string User::GetPassword() {
    return password;
}

bool User::GetStatus() {
    return status;
}

void User::ToggleStatus(short val) {
    if (val == 0) {
        status = false;
    }
    else {
        status = true;
    }
}

Privilege User::GetPrivillege() {
    return UserPrivilege;
}

Privilege User::SetPrivillege(int val) {
}

void new_user()
{

}
