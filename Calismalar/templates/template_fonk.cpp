#include <iostream>
#include <string>

template
 <      typename    
 T
 
 
 
 >
T add(T a, 
T b)
{
    return (a+
    b);
}

template <typename S>
S max(S a,S b)
{
    return(a > b) ? a : b;
}

int main()
{
    int s = 21;
    int t = 42;

    add(s,t);
    std::cout << s << "+" << t << "= " << add(s,t) << std::endl;
    float f1 = 321.23;
    float f2 = 12.42;
    std::cout << f1 << "+" << f2 << "= " << add(f1,f2) << std::endl;

    std::cout << std::endl;
    std::cout << max(s,t) << std::endl;
    std::cout << max(f1,f2) << std::endl;
}