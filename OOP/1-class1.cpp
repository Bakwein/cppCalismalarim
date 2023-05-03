#include <iostream>

using namespace std;
class Nokta
{
    /*
    DEFAULT HALI PRIVATE VE BU CLASS DISINDA KULLANILAMAZ
    int x,y;
    */
    public:
     //int x=5,y=10; UYARI VERİR C+11de çalışır.diğerinde başlangıç değeri verilemez.
    int x,y;
    void xDegerAta(int x1)
    {
        x = x1;
    }
    void yDegerAta(int y1)
    {
        y = y1;
    }
    void ortakAtama(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    void xYazdir()
    {
        cout << "x:" << x << endl;
    }
    void yYazdir()
    {
        cout << "y:" << y << endl;
    }
    void ortakYazdirma()
    {
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    bool baslangicMi()
    {
        // return x == 0 && y == 0;
        if(x == 0 && y == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    Nokta nokta1;
    cout << nokta1.x << endl; // garbage value
    cout << nokta1.y << endl; // garbage value

    nokta1.x = 5;
    nokta1.y = 10;
    cout << nokta1.x << endl; // 5
    cout << nokta1.y << endl; // 10

    cout << endl;
    nokta1.xDegerAta(31);
    nokta1.yDegerAta(41);
    nokta1.xYazdir();
    nokta1.yYazdir();
    
    cout << endl;
    cout << nokta1.getX() << endl;
    cout << nokta1.getY() << endl;

    cout << endl;
    nokta1.ortakAtama(0,0);
    nokta1.ortakYazdirma();
    cout << "baslangicta mi?:" << nokta1.baslangicMi() << endl;

    cout << endl;
    Nokta nokta2;
    Nokta *nokta3;
    nokta3 = &nokta2;
    nokta2.ortakAtama(20,40);

    cout << nokta3->getX() << " "<<nokta3->getY() << endl;
    nokta3->ortakYazdirma();

    cout << endl;
    Nokta *nokta4;
    nokta4 = new Nokta(); // Dinamik olarak oluşturduk
    nokta4->ortakAtama(55,45);
    nokta4->ortakYazdirma(); // 55 45

    cout << endl;
    Nokta array[10];
    Nokta* pArray;
    pArray = new Nokta[10];

    for(int i = 0; i < 10; i++)
    {
        array[i].ortakAtama(i,i+10);

        cout << i << ":" << endl;
        array[i].ortakYazdirma();
    }

    cout << endl;
    for(int b = 0; b<10;b++)
    {
        (pArray + b)->ortakAtama(b,b-10);
        
        cout << b << ":" << endl;
        (pArray + b)->ortakYazdirma();

    }
}