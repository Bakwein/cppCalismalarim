#include <iostream>

using namespace std;

class Nokta
{
    private: // başka yerden erişilemez. sadece kendi üyeleri tarafından erişilebilir.
        int x,y;
        bool baslangicMi();
    
    //protected:
    // genellikle kalıtımla türetilen sınıfların özellik ve metodlarında kullanılır.sadece kendisi ve kendisinden türetilen sınıflar tarafından erişilebilir.

    //friend:
    // bir sınıfın diğer sınıfların private üyelerine erişim izni verir. Bu erişim izni sınıfın friend olarak tanımlandığı sınıflarda geçerlidir

    public: // sınıfın herhangi bir yerinden erişilebilir

    //PRIVATE DEĞİŞKENLERE DIŞARIDAN ERİŞEBİLMEK İÇİN GETTER VE SETTER KULLANABİLİRİZ
    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void ortakAtama(int,int);

    void ortakYazdirma();



};
//:: -> SCOPE OPERATOR
void Nokta::ortakAtama(int x1,int y1)
    {
        x = x1;
        y = y1;
    }

void Nokta::ortakYazdirma()
    {
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
    }

bool Nokta::baslangicMi()
    {
        return x == 0 && y == 0;
    }

int Nokta::getX()
{
    return x;
}

int Nokta::getY()
{
    return y;
}

void Nokta::setX(int _x)
{
    x = _x;
}

void Nokta::setY(int _y)
{
    y = _y;
}

int main()
{
    Nokta n1;
    n1.ortakAtama(5,10);
    n1.ortakYazdirma();
    
    //cout << n1.baslangicMi() << endl;
    //  error: 'baslangicMi' is a private member of 'Nokta'

    //cout << "private x:" <<n1.x << endl;
    // error: 'x' is a private member of 'Nokta'


    // FONKSİYONLAR DIŞARIDA OLSA DA SADECE FONKİSYON İSMİ YAZILARAK(getX() gibi) ERİŞİLEMEZ. FONKSİYON DIŞARIDA OLSA BİLE HALA O CLASS'A AITTIR.
    n1.setX(21);
    n1.setY(32);
    cout << "getter x:" << n1.getX() << endl; // getter x:21
    cout << "getter y:" << n1.getY() << endl; // getter y:32

}