#include <iostream>

using namespace std;

int fact(int x)
{
    int s = 1;
    while(x >= 1)
    {
        s *= x;
        x--;
    }
    return s;
}

/*
int fact1(int ab)
{
    if(ab == 1)
        return 1;
    return n * fact1(n-1);
}


*/

int comb(int a,int b)
{
    int c = fact(a)/(fact(b) * (fact(a-b)));
    return c;
}

int main(int argc,char **argv)
{
    (void)argc;
    (void)argv;

    int a,b;
    cout <<"C(a,b)" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;

    if(b > a)
        cout <<"b, a'dan büyük olamaz!" << endl;
    else
        cout << comb(a,b) << endl;
}