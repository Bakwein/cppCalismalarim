#include <iostream>

class dikdortgen
{
    public:
        int en;
        int boy;
        dikdortgen()
        {
            en = 0;
            boy = 0;
        }

        dikdortgen(int en_,int boy_)
        {
            en= en_;
            boy = boy_;
        }
        int cevre()
        {
            return (2*en+2*boy);
        }
        int alan()
        {
            return(en*boy);
        }
};

int main()
{
    dikdortgen d1;
    dikdortgen d2;

    d1.en = 50;
    d1.boy = 100;

    d2 = dikdortgen(150,200);
    std::cout << "d1: " << d1.cevre() << " " << d1.alan() << std::endl;
    std::cout << "d1: " << d2.cevre() << " " << d2.alan() << std::endl;
    return (0);
}