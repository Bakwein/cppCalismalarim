#include <iostream>

int main(int argc,char **argv)
{
    int isci_sayisi, kac_isci, kac_saat;
    std::cout << "Isci sayisini giriniz:";
    std::cin >> isci_sayisi;

    std::cout << "Girdiginiz iscilerin isi kac saatte yaptigini giriniz:";
    std::cin >> kac_saat;

    std::cout << "Sormak istediginiz isci sayisini giriniz:";
    std::cin >> kac_isci;

    int cevap = (isci_sayisi * kac_saat) / kac_isci;
    std::cout << kac_isci << " isi " << cevap << " saatte gerceklestirir." << std::endl;
}