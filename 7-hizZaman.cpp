#include <iostream>

using namespace std;
int main(int argc,char **argv)
{
    int yol,hiz;
    std::cout << "yol(km):";
    std::cin>>yol;

    std::cout << "hiz(km/h):";
    std::cin>>hiz;

    float zaman = yol / hiz;
    std::cout << zaman<< " saat ";;
    int dakika = (((float)yol/hiz) - yol/hiz) * 60;
    std::cout << dakika << " dakika"<<std::endl;
}