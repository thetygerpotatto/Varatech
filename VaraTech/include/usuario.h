#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
enum Privilege {
    seller, admin
};

class User
{
    public:
        User(Privilege);
        virtual ~User();

        long GetCD();
        void SetCD(long);
        std::string Getname();
        void Setname(std::string);
        std::string Getlast_name();
        void Setlast_name(std::string val);
        std::string Getaddress();
        void Setaddress(std::string val);
        void Setpassword(std::string val);
        std::string Getpassword();
        bool Getstatus();
        void togleStatus(short val);
    protected:

    private:
        long CD;
        std::string password;
        std::string name;
        std::string last_name;
        std::string address;

        bool status;

        Privilege UserPrivilege;
};

#endif // USUARIO_H
