#include <iostream>

template <class X>
X myMax(X a, X b)
{
    return(a > b) ? a : b;
}

template <class M, class N>
M myMax2(M a,N b)
{
    return(a > b) ? a : b;
}

/*
HATALI FONKSİYON -> C türü, A veya B türlerinden biri olmalıdır.
template <class A,class B, class C>
C myMax3(A a, B b)
{
    return(a > b) ? a : b;
}
*/

template<class A, class B>
typename std::common_type<A, B>::type myMax3(A a,B b)
{
    return(a > b) ? a : b;
}

template <class T, class U = char> 
class A { // default value
public:
    T x;
    U y;
    A() { 
        std::cout << "Constructor Called" << std::endl;
        std::cout << typeid(y).name() << std::endl;
    }
};


int main()
{
    //std::cout << myMax(7,15.5) << std::endl; // HATA AYNI PARAMETRE OLMASI LAZIM
    std::cout << myMax2(7,15.5) << std::endl; // M'nin tipinde return eder:15
    std::cout << myMax3(7,15.5) << std::endl; // 15.5

    std::cout << std::endl;

    A<int,int> x; //i
    A<int,char> a1; //c
    A<int> a2; // c

    
}