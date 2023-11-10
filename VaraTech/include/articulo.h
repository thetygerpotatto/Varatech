#ifndef ARTICULO_H
#define ARTICULO_H

#include <iostream>

class Article
{
    public:
        Article();
        Article(long , std::string, int, int, bool, bool); //id producto, nombre, precio, cantidad en stock, disponibilidad, nuevo-true/regresado por reclamo-false
        virtual ~Article();

        long GetId();
        void SetId(long);

        std::string GetName();
        void SetName(std::string);

        int GetPrice();
        void SetPrice(int);

        int GetQuantities();
        void SetQuantities(int);

        bool GetIsAvaiable();
        void SetIsAvaiable(short);

        bool GetIsNew();
        void SetIsNew(short);

    protected:
        long ID;
        std::string name;
        int price;
        int quantities;
        bool isAvaiable;
        bool isNew;
    private:


};

#endif
