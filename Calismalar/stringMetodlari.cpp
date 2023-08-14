#include <iostream>
#include <string>

int main()
{
    std::string s1;
    std::string s2("bbb");

    std::cout << s2 << std::endl;

    s1.assign("aaa"); // s1'e karakter dizisi atama
    std::cout << s1 << std::endl; // aaa

    s1.append("2za"); // sonuna ekleme
    std::cout << s1 << std::endl; // aaa2za

    s1.insert(3,"boom"); // 3. karakterden sonrasına ekleme
    std::cout << s1 << std::endl; // aaaboom2za

    s1.replace(3,4,""); // 3. karakterden sonra 4 karakter uzunluktaki bölümü atıp 3.parametreyi yazar
    std::cout << s1 << std::endl; // aaa2za

    /*s1.replace(3,4,"boom");
    std::cout << s1 << std::endl; // aaaboom
    */

    s1.replace(3,0,"boom");
    std::cout << s1 << std::endl; // aaaboom2za

    s1.replace(3,s1.size()-3,"");
    std::cout << s1 << std::endl; // aaa

    s1.push_back('e'); // sona char ekleme
    std::cout << s1 << std::endl; // aaae

    s1.pop_back(); // sondaki chari atar
    std::cout << s1 << std::endl; // aaa

    s1.erase(1,2);  // ilk parametreden itibaren ikinci parametre uzunluktaki bölümü atar
    std::cout << s1 << std::endl; // a

    s1.swap(s2);
    std::cout << s1 << " " << s2 << std::endl; // bbb a

    std::cout << s1.at(1) << std::endl; // 1.indexdeki char -b  / s1[1]

    s1.push_back('a');
    std::cout << s1 << std::endl; // bbba
    s2 = "ba";
    int strIndex = s1.find(s2);
    if (strIndex != -1)
        std::cout << strIndex << std::endl;
    else
        std::cout << "yok" << std::endl;

    s1 = "abcdefgh";
    std::cout << s1.substr(2) << std::endl;
    std::cout << s1.substr(2,3) << std::endl;

    std::cout << s1.compare(3,1,"e") << std::endl; // str1 3.karakterden sonraki  3 karakte boyunca def içerir mi
    // içerirse 1 yoksa farklı olan ilk karakterde (içindeki - stringdeki karakter)


    std::cout << s1.size() << " " << s1.length() << std::endl;

    s1.resize(17,'s'); // boyut degistirir eger fazlaysa kalan kısmı o char ile doldurur
    std::cout << s1 << std :: endl;

    s1.resize(14);
    std::cout << s1 << std :: endl;

    s1.clear(); // nesne silme
    std::cout << s1 << std::endl; // bos satir

    if(s1.empty())
        std::cout << "s1 bos" << std::endl;
    else
        std::cout << "s1 bos degil" << std::endl;

    //ITERATORLER
    std::cout << std::endl;
    std::string str("Merhaba ben sefa aka bakwein");
    std::string::iterator sp;

    int id;
    std::cout << "str: ";
    for(id = 0;id <(int)str.size();id++)
        std::cout << str[id];
    std::cout << std::endl;

    std::cout << "str: ";
    /*for(sp=str.begin();sp != str.end();)
    {
        std::cout << *sp++;
    }
    */

   for(sp = str.begin(); sp != str.end();sp++)
   {
        std::cout << *sp;
   }






}