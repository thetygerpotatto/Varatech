#include <iostream>
#include <vector>
#include <usuario.h>

std::vector<User> users;
User jaime(Privilege::admin);

int main()
{
    std::cout << jaime.Getname() << std::endl;
    return 0;
}
