#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>

enum Privilege {
    none, seller, admin
};

class User
{
    public:
        User();
        User(long, std::string, std::string, std::string, std::string, bool, Privilege);
        virtual ~User();

        long GetCD();
        void SetCD(long);
        bool look_for_id(int);
        std::string Getname();
        void Setname(std::string);
        std::string Getlast_name();
        void Setlast_name(std::string val);
        std::string Getaddress();
        void Setaddress(std::string val);
        void Setpassword(std::string val);
        std::string Getpassword();
        bool Getstatus();
        void togleStatus(short);
        Privilege getPrivillege();
        Privilege setPrivillege(int val);
    protected:
        long CD;
        std::string password;
        std::string name;
        std::string last_name;
        std::string address;

        bool status;
        Privilege UserPrivilege;
    private:


};

#endif // USUARIO_H
