#include <iostream>
// THIS BİR POINTERDIR. SADECE -> İLE KULLANILIR . İLE KULLANILAMAZ.
using namespace std;

class Nokta
{
    public:
        int x,y;
        int getX();
        int getY();
        
        /*void setX(int x)
        {
            this->x = x;
        }
        */
        void setX(int);
        void setY(int);
};

int Nokta::getX(){return x;}

int Nokta::getY(){return y;}

//void Nokta::setX(int x){this->x = x;}

void Nokta::setY(int y){this->y = y;}

int main()
{
    Nokta n1;
    n1.setX(5);
    n1.setY(11);
    cout << "x:" << n1.getX() << endl;
    cout << "y:" << n1.getY() << endl;
}