#include <iostream>

using namespace std;

void diziOlusturma(int *ptr, int boyut)
{
    for(int i = 0; i < boyut; i++)
    {
        cout << "ptr[" << i << "]:";
        cin >> *(ptr+i);
    }
}

void diziYazdirma(int *ptr, int boyut)
{
    for(int i = 0; i < boyut; i++)
    {
        cout << "ptr[" << i << "]: "<< *(ptr+i)<<endl;
    }
}

int diziFark(int *ptr, int boyut)
{
    int eb = ptr[0], ek = ptr[0];
    for(int i = 1; i < boyut ; i++)
    {
        if(eb < ptr[i])
            eb = ptr[i];
        if(ptr[i] < ek)
            ek = ptr[i];
    }
    //cout << "*" << eb << ek << endl;

    return eb-ek;
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int boyut;
    cout << "kac uzunlukta dizi yaratmak istersiniz:";
    cin >> boyut;

    int dizi[boyut];
    diziOlusturma(dizi,boyut);
    diziYazdirma(dizi,boyut);
    //EN BUYUK İLE EN KUCUK ARASI FARK
    cout << "dizi farki:" << diziFark(dizi,boyut) << endl;;
}