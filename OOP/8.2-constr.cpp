#include <iostream>

using namespace std;
class Nokta
{
    private:
        int x,y;
    public:
        Nokta();
        Nokta(int,int);

        int getX();
        int getY();

        void setX(int);
        void setY(int);

        void ekranaYaz();
        bool baslangictaMi();
};

Nokta::Nokta()
{
    cout << "parametresiz const." << endl;
    x = 0;
    y = 0;
}

Nokta::Nokta(int x,int y = 9)
{
    cout << "parametreli const." << endl;   
    this->x = x;
    this->y = y;
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
    Nokta dizi[3];
    // 3 tane parametresiz const. yazar
    // default const. olmadan sadece Nokta(int,int) ile derlemeye çalıştığımda hata verir.

    Nokta dizi1[3] = {1,2,3};
    // 3 tane parametreli const. yazar

    for(int i = 0;i < 3;i++)
    {
        cout << i << endl;
        dizi1[i].ekranaYaz();
        cout << endl;
    }
    //Nokta dizi2[3] = {{1,2},3,4};
    // üstteki bu derleyicide çalışmıyor ama bazı derleyicilerde bu da çalışabilir içteki parantez ilk elemanın x ve y'sine eleman atar.

    //Nokta dizi2[3] = new Nokta[3];
    // hata verir new sadece * ile kullanılır.

    Nokta *ptr = new Nokta(2,7);
    ptr->ekranaYaz();

    Nokta *ptr2;

    ptr2 = dizi1;
    //while(ptr2 != NULL)
    //{
    //    ptr2->ekranaYaz();
    //    ptr2++;
    //}
    //EĞER PTR2++'YI YAZMAZSA KSONSUZ DÖNGÜYE GİRER 1-9 YAZDIRIP DURUR
    //PTR2++ YAPTIĞIMIZDA DA SEG FAULT YERİZ(NULL GÖRMEDİĞİNDEN DOLAYI)
    
    cout << endl;
    for(int x = 0; x < 3; x++)
    {
        (ptr2+x)->ekranaYaz();
        cout << endl;
    }
    
}

