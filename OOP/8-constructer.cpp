#include <iostream>

using namespace std;

/*
CONSTRUCTERS

Kurucu fonksiyonların geri dönüş değeri olmaz.(VOID DE OLMAZ!)
sınıf ile aynı isimle olmalı
public kısımda bulunması gerekir.private tanımlanırsa bu sınıftan nesne oluşturulamaz.

*/
/*
Evet, C++ dilinde her sınıfın bir varsayılan yapıcı (default constructor) fonksiyonu vardır. Varsayılan yapıcı, sınıfın nesnelerinin oluşturulması sırasında herhangi bir argüman almayan bir yapıcıdır. Eğer sınıfın herhangi bir yapıcısı tanımlanmazsa, C++ derleyicisi otomatik olarak bir varsayılan yapıcı üretir. Varsayılan yapıcı, sınıfın veri üyelerini varsayılan değerlerle başlatır ve bellekte yeni bir nesne oluşturur. Ancak, sınıfın özel gereksinimleri varsa, bir varsayılan yapıcı tanımlamak mümkündür.
*/
class Nokta
{
    private:
        int x,y;
    public:
        Nokta();
        Nokta(int,int);



        int getX();
        int getY();

        void setX(int);
        void setY(int);

        void ekranaYaz();
        bool baslangictaMi();
};

Nokta::Nokta()
{
    x = 0;
    y = 0;
}
/*
Nokta::Nokta(int x,int y)
{
    this->x = x;
    this->y = y;
}
*/

//eğer y değerine bir şey atamazsak default olarak 9 atanacak. Mesela Nokta::Nokta(int x= 0, int y = 0) olsaydı bu normal default constructerda yaptığımız işleme benzerdi ve HATA verirdi.
// error: call to constructor of 'Nokta' is ambiguous

//eğer default const. kaldırsak ve alttaki sadece alttakini alttaki hali ile oluşturmaya çalışırsak yine  hata verecektir;
// error: addition of default argument on redeclaration makes this constructor a default constructor
//Nokta::Nokta(int x = 55,int y = 9)
// ÜSTTEKİ DERLEYİCİDEN DERLEYİCİYE DEĞİŞİYOR!!!

/*
Nokta::Nokta(int x = 55,int y = 9)
{
    this->x = x;
    this->y = y;
}
*/





Nokta::Nokta(int x,int y = 9)
{
    this->x = x;
    this->y = y;
}


int Nokta::getX(){return x;}
int Nokta::getY(){return y;}
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}
//Nokta:: KAPSÜLLEME OPERATÖRÜ - SINIFIN İSİM UZAYI
void Nokta::ekranaYaz()
{
    //cout << "x:" << n1.x << endl << "y:" << n1.y << endl;
    // n1'den dolayı hata verir zaten Nokta:: ile bir isim uzayından değişkenleri çeker
    cout << "x:" << x << endl << "y:" << y << endl;
}
/*
"Nokta n1" ifadesi, "Nokta" sınıfından bir nesne oluşturur ve "n1" adı altında saklar. Bu nesne, "x" ve "y" adında iki değişken içerir. Bu değişkenlere "n1.x" ve "n1.y" şeklinde erişebilirsiniz. Ancak, "ekranaYaz" fonksiyonu, "n1" nesnesinin "x" ve "y" değişkenlerine doğrudan erişir, bu nedenle "n1.x" ifadesi hata verir. Bunun yerine, "n1.ekranaYaz()" şeklinde kullanabilirsiniz. Bu, "n1" nesnesinin "ekranaYaz" fonksiyonunu çağırdığı anlamına gelir ve fonksiyon, nesnenin "x" ve "y" değişkenlerine erişebilir.
*/

bool Nokta::baslangictaMi()
{
    if(x == 0 || y == 0)
        return true;
    return false;
}

int main()
{
    /*Nokta n1;
    n1.setX(5);
    n1.setY(14);

    cout << "x:" << n1.getX() << " y:" << n1.getY() << endl;
    n1.ekranaYaz();

    cout << "baslangicta mi?:" << n1.baslangictaMi() << endl;
    */

   Nokta n2;
   n2.ekranaYaz(); // 0 0

    cout << endl;
    
   Nokta n3(5,16);
   n3.ekranaYaz(); // 5 16
    
    cout << endl;

   Nokta n4(4);
   n4.ekranaYaz(); // 4 9

   //Nokta n5(,8); HATA VERİR BÖYLE BOŞLUK BIRAKACAK ŞEKİLDE KULLANAMAYIZ
   //n5.ekranaYaz();

}