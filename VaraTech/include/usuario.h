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

        long GetCC();
        void SetCC(long);

        bool list_users(int);

        std::string GetName();
        void Setname(std::string);

        std::string GetLastName();
        void SetLastName(std::string val);

        std::string GetAddress();
        void SetAddress(std::string val);

        void SetPassword(std::string val);
        std::string GetPassword();

        bool GetStatus();
        void ToggleStatus(short);

        Privilege GetPrivillege();
        Privilege SetPrivillege(int val);
    protected:
        long CC;
        std::string password;
        std::string name;
        std::string last_name;
        std::string address;

        bool status;
        Privilege UserPrivilege;

    private:


};

#endif // USUARIO_H
