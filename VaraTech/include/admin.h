#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include "usuario.h"

class Admin : public User
{
    public:
        Admin();
        virtual ~Admin();
        void sayhello();

    protected:

    private:
};

#endif // ADMIN_H
