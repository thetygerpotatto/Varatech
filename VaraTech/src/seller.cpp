#include "seller.h"


Seller::Seller()
{
    name = last_name = password = address = "-";
    status = true;
    UserPrivilege = Privilege::seller;
}

Seller::Seller(long CDa, std::string pssd, std::string nm, std::string lsnm, std::string addr, bool st, Privilege p)
{
    CC = CDa;
    name = nm;
    last_name = lsnm;
    password = pssd;
    address = addr;
    status = st;
    UserPrivilege = p;
}

Seller::~Seller()
{
    //dtor
}


