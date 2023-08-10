#include <iostream>

using namespace std;

int us(int x)
{
    if(x == 0)
        return 1;
    return 2 * us(x-1);
}

bool asalmi(int d)
{
    int x = 0;
    for(int h=2;h <d/2;h++)
    {
        if(!(d % h))
            return false;
    }
    return true;
}

int main(int argc,char **argv)
{
    (void)argc;
    (void)argv;

    for(int i=1;i<=20;i++)
    {
        cout << us(i) - 1 << endl;
    }
    cout << "--ASAL--" << endl;
    int sayac = 0;
    int s = 2;
    while(sayac < 20)
    {
        if(asalmi(s))
        {
            cout << s << endl;
            sayac++;
        }
        s++;
    }
}