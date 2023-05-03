#include <iostream>

void fonk(int *ptr)
{
    *ptr = 41;
}

using namespace std;
int main(int argc, char **argv)
{
    int a = 10;
    int *p = &a;

    cout << "a'nın değeri:" << a << endl; // 10
    cout << "a'nın adresi:" << &a << endl; // 0x16d5a73dc
    cout << "p'nin adresi:" << &p << endl; // 0x16d5a73d0
    cout << "p'nin gosterdigi adres:" << p << endl; // 0x16d5a73dc
    cout << "p'nin gosterdigi adres degeri:" << *p << endl; // 10

    *p = 35;
    cout <<"a:" << a << endl;
    cout << endl;

    int x[4] = {1,2,3,4};
    int xU = 4;
    int *p1 = x;

    for(int i = 0;i<xU;i++)
    {
        cout << x[i] << " " << p1[i] << endl;
    }
    cout << endl;
    p1[3] = 45;
    cout << x[3] << " " << p1[3] << endl;
    cout << endl <<"DINAMIK HAFIZA VE MALLOC" << endl;

    int *p2 = (int *)malloc(sizeof(int) * 3);
    int i = 0;
    while(i < 3)
    {  
        p2[i] = i;
        i++;
    }

    i = 0;
    while(i<3)
    {
        cout << "p2[" << i << "]:"<<p2[i] << endl;
        i++;
    }
    cout << endl;
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 50;
    cout << "*ptr :" << *ptr << endl; // 50
    fonk(ptr);
    cout << "*ptr :" << *ptr << endl; // 41





}