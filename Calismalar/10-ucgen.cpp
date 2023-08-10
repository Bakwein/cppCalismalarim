#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int boyut;
    cout << "boyut:";
    cin>>boyut;
    cout << "NORMAL YARIM" << endl;
    for(int i = 0; i < boyut; i++)
    {
        for(int x = i; x >= 0; x--)
        {
            cout <<"*";
        }
        cout << endl;
    }
    cout << "TERS YARIM" << endl;

    for(int a = 0; a < boyut; a++)
    {
        for(int c = a; c>= 0; c--)
        {
            cout << " ";
        }
        for(int b = boyut-1-a; b >= 0 ; b--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "NORMAL TAM UCGEN"<< endl;
    for(int a1 = 0; a1 < boyut; a1++)
    {
        for(int c1 = boyut-1-a1;c1 > 0;c1--)
        {
            cout << " ";
        }
        for(int b1= a1 * 2 + 1;b1 > 0;b1--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "TERS TAM UCGEN" << endl;
    for(int a2 = 0; a2 < boyut; a2++)
    {
        for(int c2 = 0; c2 < a2; c2++)
        {
            cout << " ";
        }
        for(int b2 = (boyut-a2)*2 - 1; b2 > 0; b2--)
        {
            cout << "*";
        }
        
        cout << endl;
    }

    cout << "ESKENAR DORTGEN" << endl;

    for(int a1 = 0; a1 < boyut; a1++)
    {
        for(int c1 = boyut-1-a1;c1 > 0;c1--)
        {
            cout << " ";
        }
        for(int b1= a1 * 2 + 1;b1 > 0;b1--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int a2 = 0; a2 < boyut; a2++)
    {
        for(int c2 = 0; c2 < a2; c2++)
        {
            cout << " ";
        }
        for(int b2 = (boyut-a2)*2 - 1; b2 > 0; b2--)
        {
            cout << "*";
        }
        
        cout << endl;
    }



}