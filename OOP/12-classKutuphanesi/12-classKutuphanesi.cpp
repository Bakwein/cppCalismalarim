#include "12-classKutuphanesi.hpp"

Nokta::Nokta() : t(0)
{
    std::cout << "parametresiz const. " << x << " " << y << std::endl;
    x = 0;
    y = 0;
    // t = 0; HATALI
    z = new int(5);
}

Nokta::Nokta(int x,int y = 9,int t = 0) : t(t)
{
    std::cout << "parametreli const. " << x << " " << y <<std::endl;   
    this->x = x;
    this->y = y;
    z = new int(6); 
}

Nokta::Nokta(const Nokta& n) : t(n.t)
{
    x = n.x;
    y = n.y;
    z = new int(*n.z);
    //t = n.t; CONST VARIABLE OLMASI İÇİN FONK. YANINDA ÜSTTEKİ GİBİ TANIMLANMALI
    std::cout << "Kopyalama constructerı " << x << " " << y << std::endl;
}

Nokta::~Nokta()
{
    std::cout << "Yıkıcı " << x << " " << y <<std::endl;
    delete z; 
}

int Nokta::getX()const{return x;}
int Nokta::getY()const{return y;}
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}
void Nokta::ekranaYaz()
{
    std::cout << "x:" << x << std::endl << "y:" << y << std::endl;
}

bool Nokta::baslangictaMi()
{
    if(x == 0 || y == 0)
        return true;
    return false;
}


