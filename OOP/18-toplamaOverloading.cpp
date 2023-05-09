#include <iostream>
#include <time.h>

using namespace std;
/*
c++'da olmayan operatörlere bir işlev yüklemek mümkün değil:^,.,::,?:,sizeof();

*/

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

        // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        Kolon operator+(const Kolon&k)const
        {
            if(boyut == k.boyut)
            {
                Kolon temp(boyut);
                for(int i = 0;i<boyut;i++)
                {
                    temp.data[i] = data[i] + k.data[i];
                }
                return temp;
            }
        }

        Kolon operator+(int sayi)const
        {
            Kolon temp(boyut);
            for(int x =0;x<boyut;x++)
            {
                temp.data[x] = data[x] + sayi;
            }
            return temp;
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
    srand(time(NULL));
    Kolon k(4);
    Kolon k2(4);

    for(int i = 0; i<4;i++)
    {
        k.setI(i,rand() % 50);
        k2.setI(i,rand() % 50);
    }
    (k+k2).print();
    cout << endl;
    cout << "k:";
    k.print();
    cout <<  "k+5:";
    (k+5).print();
}