#ifndef SELLER_H
#define SELLER_H

#include "usuario.h"
#include <iostream>

class Seller : public User
{
    public:
        Seller();
        Seller(long, std::string, std::string, std::string, std::string, bool, Privilege);
        virtual ~Seller();

    protected:

    private:
};

#endif // SELLER_H
