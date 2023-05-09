#include <iostream>
/*
public kalitimda tabandaki public türemisteki publice, protected protecteda, private private olarak türemise yazilir.
proteceted kalitimda tabandaki private private'a, protected protecteda, public de protected olarak türetilmise yazilir
*/
/*
BİRDEN FAZLA KALITIM ALMADIĞIMIZ ZAMAN TABAN SINIFIN TABAN SINIFINA ERİŞİM ALMASINI İSTEMİYORSAK PRIVATE ALMASINI İSTİYORSAK PROTECTED KALITIM ALMALIYIZ.
*/

using namespace std;

class A
{
    private:
        int priA;
    protected:
        int proA;
    public:
        int pubA;
        A():pubA(0),proA(1),priA(2){}
};
/*
class B:public A
{
    private:
        int priB;
    protected:
        int proB;
    public:
        int pubB;
        B():pubB(3),proB(4),priB(5){}
        void yazdir()
        {
            cout << A::pubA << " " << A::proA << endl; // A::priA yazılırsa hata verir
            //cout << pubA << " " << proA << endl; ÜSTTEKİ İLE AYNI
        }
};
*/

class B:protected A
{
    private:
        int priB;
    protected:
        int proB;
    public:
        int pubB;
        B():pubB(3),proB(4),priB(5){}
        void yazdir()
        {
            cout << A::pubA << " " << A::proA << endl; // A::priA yazılırsa hata verir
            //cout << pubA << " " << proA << endl; ÜSTTEKİ İLE AYNI
        }
};

int main()
{
    B b;
    //cout << b.pubA; // PUBLIC OLANDA 0 - PROTECTED OLANDA HATA VERİR
    //cout << b.proA; //  error: 'proA' is a protected member of 'A'
    cout << endl;
    b.yazdir(); // protected kalıtımda türemiş sınıf taban sınıfın değişkenlerine ve methodlarına erişebilirken main ve class dışı fonksiyonlarda b üzerinden a degiskenleri ve methodlarına erişemeyiz.

}
