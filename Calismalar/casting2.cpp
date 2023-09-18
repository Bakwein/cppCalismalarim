#include <iostream>

int main()
{
    int sefa = 6;
    double s = sefa;
    std::cout << s << std::endl;

    double s1 = (double)sefa;
    std::cout << s1 << std::endl;

    std::cout << typeid(s).name() << " " << typeid(s1).name() <<std::endl;

    sefa += 0.1;
    std::cout << s1 << std::endl;

    std::cout << typeid(sefa+0.1).name() << std::endl;
    std::cout << typeid(sefa+1).name() << std::endl;

    s+= 0.2;
    s1 += 0.9;
    int new_int = s + s1; // 13.1 -> 13
    std::cout << "new_int: " << new_int << std::endl;

    int new_int2 = int(s) + int(s1); // 6 + 6
    std::cout << "new_int2: " << new_int2 << std::endl;

}