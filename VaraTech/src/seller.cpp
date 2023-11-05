#include "seller.h"


Seller::Seller()
{
    name = last_name = password = address = "-";
    status = true;
    UserPrivilege = Privilege::seller;
}

Seller::~Seller()
{
    //dtor
}


