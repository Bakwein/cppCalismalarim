#include <iostream>

using namespace std;
int main(int argc,char **argv)
{
    (void)argc;
    (void)argv;

    int kac_sayi;
    cout << "Kac sayi girmek istersiniz:";
    cin >> kac_sayi;

    float neg = 0,poz = 0,sifir = 0;
    int girilen;
    for(int i =0 ; i < kac_sayi; i++)
    {
        cout << "sayiyi giriniz:";
        cin >> girilen;
        if(girilen < 0)
            neg += 1;
        else if(girilen > 0)
            poz += 1;
        else
            sifir += 1;
    }

    neg = neg / kac_sayi;
    poz = poz / kac_sayi;
    sifir = sifir / kac_sayi;
    cout << "Pozitifler:" << poz << endl << "Negatifler:" << neg << endl << "Sıfırlar:" << sifir << endl; 

}