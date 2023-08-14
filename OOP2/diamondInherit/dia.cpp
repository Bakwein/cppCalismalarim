#include <iostream>

class A
{
    public:
        A()
        {
            std::cout << "a()" << std::endl;
        }
};

class B:virtual public A
{
    public:
        B()
        {
            std::cout << "b()" << std::endl;
        }
};

class C:virtual public A
{
    public:
        C()
        {
            std::cout << "c()" << std::endl;
        }
};

class D:public C,public B
{
    public:
        D()
        {
            std::cout << "d()" << std::endl;
        }
};

int main()
{
    /*
    ----D----
     ^     ^
     |     |
     B     C
        ^
        |
        A
    */
   A a;
   std::cout << std::endl;
   B b;
   std::cout << std::endl;
   C c;
   std::cout << std::endl;
   D d; // eğer virtual kullanmazsak a birden fazla kez D'de kalıtım alınmış olur
   //class A:virtual public A
   //class B:virtual public A
   //üsttekiler ile B ve C ile alınmış olan A sınıfı virtual ile B ve C'dekiler A'lar sanal olmuş olup yeni bir B ve C dışında bir A debugda gözükür.
   std::cout << std::endl;
    return (0);
}