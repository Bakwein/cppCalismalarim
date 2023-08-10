#include <iostream>

int main(int argc, char **argv)
{
    // -Wall -Wextra -Werror
    (void)argc;
    (void)argv;

    int a;
    a = 10;
    std::cout << a << std::endl;
    std:: cout << "yeni a degerini giriniz: ";
    std::cin >> a;
    std:: cout << "yeni a->" << a << std::endl;
    
    // MAIN İÇİNDE NAMESPACE KULLANMA
    using namespace std;
    cout << "girdiginiz sayinin 10 fazlasi -> " << a + 10 << endl;
    return 0;
}