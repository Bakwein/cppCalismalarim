#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int nt;
    cout << "Notu giriniz:";
    cin >> nt;
    if(nt < 50 && nt >= 0)
    {
        cout << "F" << endl;
    }
    else if(nt >= 50 && nt < 70)
    {
        cout << "C" << endl;
    }
    else if(nt >= 70 && nt < 90)
    {
        cout << "B" << endl;
    }
    else if(nt >= 90 && nt <= 100)
    {
        cout << "A" << endl;
    }
    else 
    {
        cout << "Yanlis aralik girdiniz" << endl;
    }

}