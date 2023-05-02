#include <iostream>

using namespace std;
int main(int argc,char **argv)
{
    (void)argc;
    (void)argv;

    int boyut;
    cout << "matris boyutunu giriniz:";
    cin >> boyut;

    for(int x = 0; x < boyut; x++)
    {
        for(int y = 0; y < boyut; y++)
        {
            if(y == boyut -1 -x)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
}