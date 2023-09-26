#include <iostream>

template <typename S>
S myMax(S x, S y)
{
    return(x > y) ? x:y;
}

int main()
{
    std::cout << myMax<int>(90,91) << std::endl;
    std::cout << std::endl;
    std::cout << "90:" << char(90) << " " << "91:" << char(91) << std::endl;
    std::cout << myMax<char>(90,91) << std::endl;
}