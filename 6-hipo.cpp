#include <iostream>
#include <math.h>

int main(int argc,char **argv)
{
    int a,b;
    float c;

    std::cout << "a:";
    std::cin >> a;

    std::cout << "b:";
    std::cin >> b;

    c =  sqrt(a*a + b * b);
    std::cout <<"c:" << c << std::endl;

    std::cout << "cevre:" << a+b+c << std::endl;
    std::cout << "alan:" << a*b/2 << std::endl;
    
}