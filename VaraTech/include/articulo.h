#ifndef ARTICULO_H
#define ARTICULO_H

#include <iostream>

class Articulo
{
    public:
        Articulo();
        Articulo(long , std::string, int, int, bool, bool); //id producto, nombre, precio, cantidad en stock, disponibilidad, nuevo-true/regresado por reclamo-false
        virtual ~Articulo();

        std::string Get_name();
        void Set_name(std::string);
        int Get_price();
        void Set_price(int);
        int Get_quantities();
        void Set_quantities(int);
        bool Get_is_avaiable();
        void Set_is_avaiable(short);
        bool Get_is_new();
        void Set_is_new(short);

    protected:
        long P_id;
        std::string name;
        int price;
        int quantities;
        bool is_avaiable;
        bool is_new;
    private:


};

#endif
