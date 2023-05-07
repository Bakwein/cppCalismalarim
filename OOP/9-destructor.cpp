#include <iostream>

using namespace std;
/*
DESTRUCTOR-YIKICI FONK.
sadece 1 tane olabilir
parametresi olamaz ve bir şey döndürmez void dahil.
OLUŞAN NESNEYİ BELLEKTE TEMİZLER
*/
class Nokta
{
    private:
        int x,y;
        
    public:
        int *z;
        Nokta();
        Nokta(int,int);
        ~Nokta();
        

        int getX();
        int getY();

        void setX(int);
        void setY(int);

        void ekranaYaz();
        bool baslangictaMi();
};

Nokta::Nokta()
{
    cout << "parametresiz const." << endl;
    x = 0;
    y = 0;
    z = new int(5);
}
/*
*z = 5 ifadesi, bir önceki işlemde z olarak tanımlanmış bir bellek adresindeki değeri değiştirir. Bu işlem, z'nin zaten önceden tanımlanmış bir adresi olduğunu varsayarak çalışır. Bu nedenle, bu ifadeyi kullanmadan önce z'nin bir bellek adresine atanması gerekir.
z = new int(5) ifadesi, dinamik bellek ayırma işlemi yaparak, program çalışma zamanında int türünde bir bellek bloğu oluşturur ve z adlı bir işaretçi değişkenine bu bellek bloğunun başlangıç adresini atar. Bu ifade ayrıca, bellek bloğuna başlangıç değeri olarak 5 atar.
*/

Nokta::Nokta(int x,int y = 9)
{
    cout << "parametreli const." << endl;   
    this->x = x;
    this->y = y;
    z = new int(6); // böyle oluşturmadığım durumda bus error yedim.
}

Nokta::~Nokta()
{
    cout << "Yıkıcı" << endl;
    delete z; //c'deki free. pointerda açılan yeri temizler
}

int Nokta::getX(){return x;}
int Nokta::getY(){return y;}
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
    Nokta n1;
    Nokta n2(3,4);

    /*
    parametresiz const.
    parametreli const.
    Yıkıcı
    Yıkıcı
    */


}