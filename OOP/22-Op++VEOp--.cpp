#include <iostream>
#include <time.h>

using namespace std;
/*
c++'da olmayan operatörlere bir işlev yüklemek mümkün değil:^,.,::,?:,sizeof();
*/
//operator delete[],operator delete,operator new[],operator new,operator!=,operator&=,operator&,operator+,operator-,operator<<=,...

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
           *this = k;
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
        
        void operator=(const Kolon&k)
        {
            //delete[] data;
            boyut = k.boyut;
            data = new int[boyut];
            for(int i = 0;i <boyut;i++)
            {
                data[i] = k.data[i];
            }
        }

        int& operator[](int indis)
        {
            if(indis >= 0 && indis < boyut)
            {
                return data[indis];
            }
        }

        void operator()()const
        {
            for(int i=0;i<boyut;i++)
            {
                cout<< data[i] << " ";
            }
        }

        void operator()(int j)const
        {
            if(j> 0 && j <= boyut)
            {
                for(int i=0;i<j;i++)
                {
                    cout<< data[i] << " ";
                }
            }
        }

        void operator()(int i,int j)
        {
            if((i>=0 && i < boyut) && (j>= 0 && j < boyut))
            {
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }

        //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

        void ara(int value)
        {
            for(int i=0;i<boyut;i++)
            {
                data[i] += value;
            }
        }

        void operator++(int ) //sonradan arttirma
        {
            ara(1);
        }

        void operator++() // önden arttirma
        {
            ara(2);
        }

        void operator--(int ) //sonradan azaltma
        {
            ara(-1);
        }

        void operator--() // önden azaltma
        {
            ara(-2);
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
    Kolon k1(5);
    for(int i = 0;i<5;i++)
    {
        k1.setI(i,rand()%10);
    }
    k1.print();
    cout << endl;

    k1++;
    k1.print(); // 1 arttiracak

    ++k1;
    k1.print(); // 2 arrttiracak

    cout << endl;

    k1--;
    k1.print(); // 1 azaltacak

    --k1;
    k1.print(); // 2 azaltacak
}