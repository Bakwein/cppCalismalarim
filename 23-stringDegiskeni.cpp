#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    string s;
    char *p = "sefa";
    char dizi[5] = "sefa";
    s = p;
    cout << s << endl; // sefa
    cout << s.size() << endl; // 4
    s.append("deneme"); 
    cout << s << endl; //sefadeneme
    cout << s.substr(2,3) << endl; //fad - 2'den itibaren 3 index ilerler ekrana yazdırır.
} 