#include <iostream>

using namespace std;

class Kolon
{
    int *data;
    int boyut;
    public:
        Kolon(int boyut = 1) : boyut(boyut)
        {
            data = new int[boyut];
            //cout << boyut << " elemanli bir dizi olusturuldu" << endl;
        }

        Kolon(const Kolon& k)
        {
            //cout << "Kopyalama kurucusu calisti" << endl;
            this->boyut = k.boyut;
            data = new int[boyut];
            for(int a = 0;a < boyut;a++)
            {
                data[a] = k.data[a];
            }
        }

        ~Kolon()
        {
            delete[] data;
            //cout << "Yikici calisti. Dizi silindi" << endl;
        }

        void setI(int indis,int value)
        {
            if(indis < boyut)
            {
                data[indis] = value;
            }
        }

        const int* getData()const{return data;}
        int getBoyut(){return boyut;}
        void setBoyut(int boyut){this->boyut = boyut;}
        void print()const
        {
            for(int i = 0;i<boyut;i++)
            {
                cout << data[i] << " ";
            }
            cout << endl;
        }

        Kolon topla(const Kolon&k)const
        {
            if(boyut==k.boyut)
            {
                Kolon temp(boyut);
                for(int i = 0;i<boyut;i++)
                {
                    temp.data[i] = data[i] + k.data[i];
                }
                return temp;
            }
        }
        
        Kolon carp(const Kolon&k)const
        {
            if(boyut == k.boyut)
            {
                Kolon temp(boyut);
                for(int i = 0;i<boyut;i++)
                {
                    temp.data[i] = data[i] * k.data[i];
                }
                return temp;
            }
        }

        double ortalama()const
        {
            int toplam = 0;
            for(int i = 0;i<boyut;i++)
            {
                toplam += data[i];
            }
            return (double)toplam/boyut;
        }
};

int main()
{
    Kolon k1(4);
    k1.setI(0,2);
    k1.setI(1,5);
    k1.setI(2,45);
    k1.setI(3,22);
    Kolon k2(k1);

    cout << k1.getData()<<endl; // 0x1296067c0
    cout << k2.getData()<< endl; // 0x1296067d0 FARKLI

    k1.print();
    k2.print();

    cout << "k1 + k2 ->";
    (k1.topla(k2)).print();
    cout << "k1 * k2 ->";
    (k1.carp(k2)).print();
}