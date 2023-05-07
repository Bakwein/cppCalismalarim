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
        

        int getX()const; // nesnenin hiçbir özelliği bu method içinde değiştirilemez.
        // const int getX();
        int getY()const;
        // const int getY();

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

/*
int Nokta::getX()const
{
    int x_ = x*2;
    return x;
}
HATA VERMEZ CLASS İÇİNDEKİ HERHANGİ BİR ŞEYİ DEĞİŞTİRMEDİK
*/

int Nokta::getX()const{return x;}
int Nokta::getY()const{return y;}
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
    Nokta n1(1,10,10);
    const Nokta n2(2,25,54);// oluştuktan sonra hiçbir deger sınıf dısından degistirilemez.
    //n2.setX(21); HATA
}