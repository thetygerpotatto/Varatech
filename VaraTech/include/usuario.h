#ifndef USUARIO_H
#define USUARIO_H


class usuario
{
    public:
        usuario();
        virtual ~usuario();

        long GetCD() { return CD; }
        void SetCD(long val) { CD = val; }
        std::string Getname() { return name; }
        void Setname(std::string val) { name = val; }

    protected:

    private:
        long CD;
        std::string name;
};

#endif // USUARIO_H
