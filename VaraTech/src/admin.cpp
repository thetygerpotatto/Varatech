#include "admin.h"

Admin::Admin()
{
    name = last_name = password = address = "-";
    status = true;
    UserPrivilege = Privilege::admin;
}

Admin::~Admin()
{
    //dtor
}

void Admin::sayhello() {
    std::cout << "hello\n";
}
