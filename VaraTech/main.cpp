#include <iostream>
#include <vector>
#include <usuario.h>
#include <admin.h>
#include <seller.h>

std::vector<User*> users;
User Jaime;
Admin lenis;
Seller pedro;
int main()
{
    users.push_back(&Jaime);
    users.push_back(&lenis);
    users.push_back(&pedro);
    Jaime.Setname("James");
    lenis.Setname("lenis");
    pedro.Setname("pedro");
    for (int i = 0; i < 3; i++) {
        std::cout << users[i]->getPrivillege() << std::endl;
    }

    lenis.sayhello();
    return 0;
}

void read_database() {

}

