#include <iostream>
#include <math.h>

using namespace std;
class Nokta
{
    private:
        int x,y;
        static int count;
    public:
        int *z;
        const int t;
        Nokta();
        Nokta(int,int,int);
        Nokta(const Nokta&);
        ~Nokta();
    
        int getX()const; 
        int getY()const;
        static int getCount();

        void setX(int);
        void setY(int);
        static void setCount(int);

        void ekranaYaz();
        bool baslangictaMi();
        double uzaklikHesapla(const Nokta&)const;
};

Nokta::Nokta() : t(0)
{
    //cout << "parametresiz const. " << x << " " << y << endl;
    x = 0;
    y = 0;
    // t = 0; HATALI
    z = new int(5);
    count++;
}

Nokta::Nokta(int x,int y = 9,int t = 0) : t(t)
{
    //cout << "parametreli const. " << x << " " << y <<endl;   
    this->x = x;
    this->y = y;
    z = new int(6); 
    count++;
}

Nokta::Nokta(const Nokta& n) : t(n.t)
{
    x = n.x;
    y = n.y;
    z = new int(*n.z);
    //t = n.t; CONST VARIABLE OLMASI İÇİN FONK. YANINDA ÜSTTEKİ GİBİ TANIMLANMALI
    //cout << "Kopyalama constructerı " << x << " " << y << endl;
    count++;
}

Nokta::~Nokta()
{
    //cout << "Yıkıcı " << x << " " << y <<endl;
    delete z; 
    count--;
}

int Nokta::getX()const{return x;}
int Nokta::getY()const{return y;}
int Nokta::getCount(){return count;}
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}
void Nokta::setCount(int _c){count = _c;}
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

double Nokta::uzaklikHesapla(const Nokta& n)const
{
    double x_ = pow(n.getX() - x,2);
    double y_ = pow(n.getY()- y,2);

    //double cevap = sqrt(x_ + y_);
    //return cevap;

    return sqrt(x_ + y_);
}

int Nokta::count = 0; // OLMAK ZORUNDA YOKSA HATA

int main()
{
    Nokta n1(3,4);
    Nokta n2(5,6);

    cout << n1.uzaklikHesapla(n2) << endl;
}