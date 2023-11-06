#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include "usuario.h"

class Admin : public User
{
    public:
        Admin();
        Admin(long, std::string, std::string, std::string, std::string, bool, Privilege);
        virtual ~Admin();
        void modifyUserStatus(User *, short);

    protected:

    private:
};

#endif // ADMIN_H
