#include <iostream>

using namespace std;

class Nokta
{
    public:
    int x,y;

    void ortakAtama(int,int);

    void ortakYazdirma();

    bool baslangicMi();
};
//:: -> SCOPE OPERATOR
void Nokta::ortakAtama(int x1,int y1)
    {
        x = x1;
        y = y1;
    }

void Nokta::ortakYazdirma()
    {
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
    }

bool Nokta::baslangicMi()
    {
        return x == 0 && y == 0;
    }

int main()
{
    Nokta n1;
    n1.ortakAtama(5,10);
    n1.ortakYazdirma();
    cout << n1.baslangicMi() << endl;

}