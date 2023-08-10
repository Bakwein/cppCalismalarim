#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    char ch;
    cout << "Lutfen harfi giriniz:";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(char c1= 'A' ; c1 <= ch; c1++)
        {
            char c2;
            for(c2 = 'A'; c2 <= c1; c2++)
            {
                cout << c2;
            }
            for(char c3= c1-1;c3 >= 'A' ;c3-- )
            {
                cout << c3;
            }
            cout << endl;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(char c1= 'a' ; c1 <= ch; c1++)
        {
            char c2;
            for(char c2 = 'a'; c2 <= c1; c2++)
            {
                cout << c2;
            }
            for(char c3= c1-1; c3 >= 'a';c3--)
            {
                cout << c3;
            }
            cout << endl;
        }
    }
}