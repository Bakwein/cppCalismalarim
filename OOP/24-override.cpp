#include <iostream>
using namespace std;

class Base
{
    public:
        int data[100];
        int size;
        int x;
        Base():size(0),x(0){}
        void add(int value)
        {
            data[size] = value;
            size++;
        }

        void print()const
        {
            cout << "Base print()" << endl;
            for(int i = 0;i<size;i++)
            {
                cout << data[i] << " ";
            }
        }
};

class derived:public Base{
    public:
    float data[100];
        int size;
        derived():size(0){}
        void add(float value)
        {
            data[size] = value;
            size++;
        }

        void print()const
        {
            Base::print();//TABAN SINIFINDAKİ PRINT'I ÇAĞIRDIK
            cout << endl;
            cout << "Derived print()" << endl;
            for(int i = 0;i<size;i++)
            {   
                cout << data[i] << " ";
            }
        }
        void addInt(int value)
        {
            Base::add(value);
        }

        void x()
        {
            cout << "Hello World!" << endl;
        }

};

int main()
{
    Base b1;
    b1.add(10);
    b1.add(34);
    b1.add(44);
    b1.print();
    cout << endl << endl;
    derived d1;
    d1.add(20.3);
    d1.add(11.342);
    d1.add(2.4);
    d1.addInt(8);
    d1.addInt(55);
    d1.print();
    cout << endl << endl;
    d1.x();
    Base* ptr = &d1;
    cout << ptr->x << endl;
    ptr->x = 2;
    cout << ptr->x << endl;

    return 0;
}