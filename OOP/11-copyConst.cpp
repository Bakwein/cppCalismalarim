#include <iostream>

using namespace std;
// COPY CONSTRUCTER- ÖZEL BİR CONSTRUCTER-ESKİ BİR NESNESNİN KOPYASINI YARATMAMIZI SAĞLAR
// BİR ŞEY RETURN ETMEZ
// AMA NOKTA SINIFINI PARAMETRE OLARAK ALIR
// KOPYALAMA KURUCUSU VARSAYILAN OLARAK OLUŞTURULUR! EĞER DİNAMİK OALRAK BİR POINTER VARSA BİZİM BAŞTAN OLUŞTURMAMIZ GEREKİR! z için bellekten kendimiz adres aldık. BÖYLE BİR DURUMLA KARŞILAŞIRSA HATA VERECEKTİR(copy constructer pointer için bellekten yeni değer almadığından dolayı hata verir). EXPECTİON FIRLATIR.
class Nokta
{
    private:
        int x,y;
        
    public:
        int *z;
        const int t;
        Nokta();
        Nokta(int,int,int);
        Nokta(const Nokta&);
        ~Nokta();

        

        int getX()const; 
        int getY()const;

        void setX(int);
        void setY(int);

        void ekranaYaz();
        bool baslangictaMi();
};

Nokta::Nokta() : t(0)
{
    cout << "parametresiz const. " << x << " " << y << endl;
    x = 0;
    y = 0;
    // t = 0; HATALI
    z = new int(5);
}

Nokta::Nokta(int x,int y = 9,int t = 0) : t(t)
{
    cout << "parametreli const. " << x << " " << y <<endl;   
    this->x = x;
    this->y = y;
    z = new int(6); 
}

Nokta::Nokta(const Nokta& n) : t(n.t)
{
    x = n.x;
    y = n.y;
    z = new int(*n.z);
    //t = n.t; CONST VARIABLE OLMASI İÇİN FONK. YANINDA ÜSTTEKİ GİBİ TANIMLANMALI
    cout << "Kopyalama constructerı " << x << " " << y << endl;
}

Nokta::~Nokta()
{
    cout << "Yıkıcı " << x << " " << y <<endl;
    delete z; 
}

int Nokta::getX()const{return x;}
int Nokta::getY()const{return y;}
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}
void Nokta::ekranaYaz()
{
    cout << "x:" << x << endl << "y:" << y << endl;
}

bool Nokta::baslangictaMi()
{
    if(x == 0 || y == 0)
        return true;
    return false;
}

int main()
{
    Nokta n1(1,20,32);
    Nokta n2(n1);
    //Nokta n3 = n1;

    /*
    cout << n1.z << endl;
    cout << n2.z << endl;
    DERSEK DEFAULT COPY CONSTRUCTERDA POINTER İÇİN TEKRAR YER ALMADIĞINDAN DOLAYI ADRESLER AYNI GÖZÜKÜR BU DA HATAYA YOL AÇAR
    */
    /*
    İLK GİREN SON ÇIKAR!
    parametreli const.
    Kopyalama constructerı1 20
    Kopyalama constructerı 1 20
    Yıkıcı 1 20
    Yıkıcı
    Yıkıcı
    */
}