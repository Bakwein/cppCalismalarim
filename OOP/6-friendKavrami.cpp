#include <iostream>

using namespace std;

// FRIEND KAVRAMI 2 ÇEŞİT. 1-> bir sınıfın bir fonk. ile friend bağı olması. 2-> bir classın diğer class ile friend bağı olması.

class B;

class A
{
    int x; // default olarak private
    public:
        int getX();
        void setX(int);
        //friend void Foo(A&);
        friend void Foo(A& obj); // A SINIFINDAN BAĞIMSIZ BİR FONKİSYON

        void setY(B& obj);

};

class B
{
    int  y;
    public:
        int getY();
        void setY(int);
        friend class A;

};

int A::getX(){return x;}

void A::setX(int _x){x = _x;}

void A::setY(B& obj){obj.y = 100;}
// void A::setY(B obj){obj.y = 100;} YAZARSAK B'DEKİ Y'YE İSTEDİĞİMİZ DEĞERİ ATAMAYIZ. BUNLA BERABER BİR KOPYA OLUŞUR AMA ÜSTTEKİYLE REFERANSI OLUŞUR

//void Foo(A&a){a.x = 0;}
void Foo(A& obj){obj.x = 0;}

int B::getY(){return y;}

void B::setY(int _y){y = _y;}



int main()
{
    A a1;
    a1.setX(5);
    cout << a1.getX() << endl;
    Foo(a1);
    cout << "foo'dan sonra x:" << a1.getX() << endl;
    

    B b1;
    b1.setY(55);
    cout << "b:" << b1.getY() << endl;

    a1.setY(b1);
    cout << "friendli b:" << b1.getY() << endl;



    return 0;
}