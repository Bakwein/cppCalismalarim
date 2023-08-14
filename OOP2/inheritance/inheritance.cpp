#include <iostream>

class A
{
    public:
        A()
        {
            std::cout << "a" << std::endl;
        }
        A(int x)
        {
            std::cout << "a(int)" << std::endl;
        }
        virtual void deneme()
        {
            std::cout << "a deneme" << std::endl;
        }
        virtual ~A()
        {
            std::cout << "a dest" << std::endl;
        }
};

class B : public A
{
    public:
        B()
        {
            std::cout << "b" << std::endl;
        }
        B(int x) : A(x)
        {
            std::cout << "b(int)" << std::endl;
        }
        void deneme() // overriding
        {
            std::cout << "b deneme()" << std::endl;
        }
        
       void deneme(int x) // üst sınıfta parametresiz hali varken bu sınıfta parametresiz hali yokken böyle yapılamaz 
       {
            std::cout << "deneme(int)" << std::endl;
       }

       /*
       overloading;
       void deneme()
       void deneme(int x)
       */

         ~B()
        {
            std::cout << "b dest" << std::endl;
        }
       
};

int main()
{
    A a1;
    std::cout << "" << std::endl;
    B b1;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    A a2(2);
    std::cout << "" << std::endl;
    B b2(8);
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    b2.deneme();
    std::cout << "" << std::endl;
    b2.deneme(2);
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    /*
    A *a3 = new B(); // POLYMORPHISM
    a3->deneme();
    std::cout << "-----DEST-----" << std::endl; // LIFO
    delete a3; // pointerla oluşturduğun şeyi delete atmadan kaldırmazsın
    //system("leaks a.out");
    */
    return (0);
}