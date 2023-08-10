#include "dog.hpp"
#include <iostream>
#include <string.h>

int main()
{
    Dog Komur;

    Dog Pamuk("Pamuk","Golden",2,"White");


    Dog Pamuk2 = Dog("Pamuk2","Golden",2,"White");


    std::cout << std::endl << "--METHODS--" << std::endl;
    Pamuk2.Eat();
    Pamuk2.Sleep();
    Pamuk2.Sit();
    Pamuk2.Run();




    std::cout << "---DEST-----" << std::endl;

}