#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int u,toplam = 0;
    cout << "uzunluk:";
    cin >> u;

    int dizi[u];
    for(int i = 0; i < u; i++)
    {
        /*
        int g;
        cin >> g;
        toplam += g
        */
       cout << "dizi[" << i << "]:";
       cin >> dizi[i];
       toplam += dizi[i];
    }
    cout <<"toplam:" << toplam << endl;
}