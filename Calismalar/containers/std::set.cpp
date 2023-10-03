#include <iostream>
#include <set>

//std::set<Type> objectName;

//1 2 1 5 9 5 -> 1 2 5 9
//tekrarlama yok!
//sorted halini döndürür
//red-black tree'de kullanılır

//std:set<int, std::greater> -> azalan şekilde döndürür

//std::set<int, std::less> -> artan şekilde döndürür


/*
Ekleme ve Silme İşlemleri:

.insert(): Bir öğe ekler.
.erase(): Belirli bir öğeyi kaldırır.
.clear(): Tüm öğeleri kaldırır.
Boyut ve Boşluk Kontrolü:

.size(): set içindeki öğelerin sayısını döndürür.
.empty(): set boşsa true, değilse false döndürür.
Arama ve Erişim:

find(): Belirli bir öğeyi bulur ve iteratorunu döndürür. Eğer öğe bulunamazsa end() iteratorünü döndürür.
count(): Belirli bir öğenin set içinde kaç kez bulunduğunu sayar (genellikle 0 veya 1 olur).
Sıralama İşlemleri:

.begin(): set'in başlangıç iterator'ünü döndürür.
.end(): set'in son iterator'ünü döndürür.
rbegin(): Tersten başlangıç iterator'ünü döndürür.
rend(): Tersten son iterator'ünü döndürür.
Diğer:

lower_bound(): Belirli bir anahtar için alt sınıra işaret eden bir iterator döndürür.
upper_bound(): Belirli bir anahtar için üst sınıra işaret eden bir iterator döndürür.
equal_range(): Belirli bir anahtarı içeren öğelerin aralığını döndürür (bir pair içinde first ve second iterator'ları).


*/
int main()
{
    {
        std::set<int> Set;
        Set.insert(1);
        Set.insert(2);
        Set.insert(3);
        Set.insert(4);
        Set.insert(5);
        Set.insert(1);
        Set.insert(2);
        Set.insert(4);
        Set.insert(3);
        Set.insert(5);


        for(std::set<int>::iterator i = Set.    begin();i != Set.end();i++)
        {
            std::cout << *i << " ";
        }
        std::cout << "\n";
        for (std::set<int>::const_iterator  it = Set.cbegin(); it != Set.cend();     it++) {
        std::cout << *it << " ";
        }
        std::cout << "\n\n";

        std::set<int> s1;

        std::cout << "s1.size(): "<< s1.size() << " - s1.empty(): " << s1.empty() << std::endl;
        std::cout << "Set.size(): "<< Set.size() << " Set.empty(): "<< Set.empty() << std::endl;
        s1.clear();
        Set.clear();
    }

    {
        std::set<char> Set;
        Set.insert('A');
        Set.insert('b');
        Set.insert('k');
        Set.insert('b');
        Set.insert('m');
        Set.insert('K');
        Set.insert('l');
        Set.insert('k');
        Set.insert('a');
        Set.insert('A');

        for(std::set<char>::iterator i = Set.begin(); i!=Set.end();i++) // i<Set.end()'de neden hata alıyorum
        {
            std::cout << *i << " ";
        }
        std::cout << std::endl;
        std::cout << Set.size() <<std::endl;
        Set.erase(Set.begin());
        std::cout << Set.size() <<std::endl;
        for(std::set<char>::iterator i = Set.begin(); i!=Set.end();i++) // i<Set.end()'de neden hata alıyorum
        {
            std::cout << *i << " ";
        }
        std::cout << "\n";
        std::cout << Set.size() <<std::endl;
        //Set.erase(Set.begin(),Set.begin()+2);HATA ALIYORUM BUNA BAK
         std::cout << Set.size() <<std::endl;
        Set.erase(Set.begin(),Set.end());
        std::cout << Set.size() <<std::endl;


        
    }


}
