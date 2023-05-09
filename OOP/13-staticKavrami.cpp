#include <iostream>

using namespace std;
// static degiskenin getter ve setter'ı da static olur. getter ve setter'a private ise ihtiyaç vardır
// static methodlarda this ve const kullanilamaz
/*
Static metodlar, sınıfın örneği oluşturulmadan kullanılabilen metotlardır. Bu nedenle, bu metotlar örneğe ait özelliklere erişemezler. Dolayısıyla, this anahtar kelimesi static metotlarda kullanılamaz.
Aynı şekilde, const anahtar kelimesi de bir değişkenin değerinin değiştirilemez olduğunu belirtmek için kullanılır. Ancak static metodlar, sınıfın örneği olmadan çağrıldıkları için, bu anahtar kelimesi de kullanılamaz.
Bununla birlikte, static metotlar sınıfın diğer özelliklerine erişebilir ve bu özellikler değiştirilebilir. Bu nedenle, static metotlarda sadece const anahtar kelimesi kullanılamaz
*/
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

//int Nokta::count = 0; // OLMAK ZORUNDA YOKSA HATA
int Nokta::count = 100;

int main()
{
    Nokta n1(1,20,32);
    cout << n1.getCount()  << endl;
    n1.setCount(200);
    Nokta n2(n1);
    cout << n1.getCount() << " " << n2.getCount() << endl;
    n2.setCount(2);

    {
        cout << n2.getCount() << endl;
        Nokta n3(n1);
         cout << n3.getCount()  << endl;
    }
     cout << n1.getCount() << " " << n2.getCount() << endl;

    
}