#include "admin.h"

Admin::Admin()
{
    name = last_name = password = address = "-";
    status = true;
    UserPrivilege = Privilege::admin;
}

Admin::Admin(long CDa, std::string pssd, std::string nm, std::string lsnm, std::string addr, bool st, Privilege p)
{
    CD = CDa;
    name = nm;
    last_name = lsnm;
    password = pssd;
    address = addr;
    status = st;
    UserPrivilege = p;
}

Admin::~Admin()
{
    //dtor
}

void Admin::sayhello() {
    std::cout << "hello\n";
}
