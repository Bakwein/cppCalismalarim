#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    char s[11];
    cout << "lutfen 12lik bir saat giriniz(hh:mm:ssAM/PM):";
    cin >> s;
    if(s[8] == 'A' && s[9] == 'M')
    {
        s[8] = '\0';
    }
    else if(s[8] == 'P' && s[9] == 'M')
    {
        s[8] = '\0';
        s[0]++;
        s[1] += 2;
    }
    cout << s << endl;
    
    

}