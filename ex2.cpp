#include <iostream>
#include <string>

using namespace std;

class FormaGeometrica{
    public:
        virtual double calculaArea(double &a, double &b) = 0;
        virtual void oi(){cout << "oi, sou uma forma geometrica" << endl;}
};

class Retangulo : public FormaGeometrica{
    private:
        double altura;
        double base;

    public:
        Retangulo() : altura(0), base(0){};     
        Retangulo(double a, double b) : altura(a), base(b){};
        double calculaArea(double &a, double &b) override {return a*b;}
        void oi() override {cout << "oi, sou um retangulo" << endl;}
};

int main(){   
    FormaGeometrica *f;
    Retangulo r;
    
    //Permitindo que o método oi() possa ser invocado corretamente para um objeto Retângulo, mesmo a partir de um ponteiro de FormaGeometrica
    f = &r;
    f->oi();

}