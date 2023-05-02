#include <iostream>

int main(int argc,char **argv)
{
    int a,b,c;
    std::cout << "a sayisini giriniz:";
    std::cin >> a;

    std::cout << "b sayisini giriniz:";
    std::cin >> b;

    std::cout << "c sayisini giriniz:";
    std::cin >> c;   

    if((a > b && c > a) && (a > c && b > a))
        std::cout << "a iki sayi arasindadir"<<std::endl;
    else
        std::cout << "a iki sayi arasinda degildir"<<std::endl;
    if(a == b && a < c)
        std::cout << "a b'ye esit, c'den de kucuktur"<< std::endl;
    else
        std::cout <<"a b'ye esit, c'den kucuk degildir" << std::endl;
    if(a > b && a > c)
        std::cout << "a, b ve c'den buyuktur" << std::endl;
    else
        std::cout << "a, b ve c'den buyuk degildir" << std::endl;
    if(a == b && a == c)
        std::cout << "a, b ve c'ye eşittir" << std::endl;
    else
        std::cout <<"a, b ve c'ye esit degildir" << std::endl;
    



}