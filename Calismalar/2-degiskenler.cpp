#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a;
    a = 20;
    cout << a << endl;
    int b = 20;int c = 50;
    // int b = 20,c = 50; ile aynı!
    cout << b << c; // yeni new line yok ardında bir şey yazdırmak istersek yanından devam eder.
    cout << "za" << endl; 
    int z;
    cout << z << endl; // 16127712 garbage value atar
    /*
    Değişken isimleri;
    başında sayı olamaz -> int 2yas;
    ozel karakterler ile baslayamaz int _deger;
    dil'deki özel kavramlar ile aynı OLAMAZ int int; / int if; / int cout; 
    */
    float pi = 3.14;
    cout << pi << endl;
    long long tl = 210925901259; // sadece long ile kullanmazdım overflow uyarisi verdi. uyari ile de çıktı verilebilir lakin istediğimiz değere ulaşamayız
    cout << "tl -> " << tl << endl;
    char ch = 's';
    cout << "karakter -> " << ch << endl;

    // CASTING
    // pi -> 3.14
    int cast1 = pi;
    cout << "cast1 -> " << cast1 << endl; // 3 YUVARLAMA YOK TAM KISMINI ALIR
    int s1 = 31;
    float cast2 = s1; 
    cout << "cast2 -> " << cast2 << endl; // 31
    cout << "64 " << 64 << endl; // 64 64
    int forascii = 64;
    char cast3 = forascii;
    cout << "cast3 -> " << cast3 << endl; // @
    
    // TYPE CASTING
    cout << char(64) << endl; // @
    cout << int('@') << endl; // 64
    
    
    //Bool
    bool dogru = 1;
    bool yanlis = 0;
    cout << dogru << " " << yanlis << endl; //1 0

}