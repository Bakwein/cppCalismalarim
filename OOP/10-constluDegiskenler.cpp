#include <iostream>

using namespace std;
class Nokta
{
    private:
        int x,y;
        
    public:
        int *z;
        const int t;
        Nokta();
        Nokta(int,int,int);
        ~Nokta();
        

        int getX();
        int getY();

        void setX(int);
        void setY(int);

        void ekranaYaz();
        bool baslangictaMi();
};

Nokta::Nokta() : t(0)
{
    cout << "parametresiz const." << endl;
    x = 0;
    y = 0;
    // t = 0; HATALI
    z = new int(5);
}

Nokta::Nokta(int x,int y = 9,int t = 0) : t(t)
{
    cout << "parametreli const." << endl;   
    this->x = x;
    this->y = y;
    //this->t = t; HATALI
    z = new int(6); // böyle oluşturmadığım durumda bus error yedim.
}

Nokta::~Nokta()
{
    cout << "Yıkıcı" << endl;
    delete z; //c'deki free. pointerda açılan yeri temizler
}

int Nokta::getX(){return x;}
int Nokta::getY(){return y;}
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}
void Nokta::ekranaYaz()
{
    cout << "x:" << x << endl << "y:" << y << endl;
}

bool Nokta::baslangictaMi()
{
    if(x == 0 || y == 0)
        return true;
    return false;
}

int main()
{
    Nokta n1;
    n1.ekranaYaz();
    Nokta n2(5,12);
    n2.ekranaYaz();
    Nokta n3(4,12,13);
    n3.ekranaYaz();

    /*
    parametresiz const.
    x:0
    y:0
    parametreli const.
    x:5
    y:12
    parametreli const.
    x:4
    y:12
    Yıkıcı
    Yıkıcı
    Yıkıcı
    
    */
}