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

.find(): Belirli bir öğeyi bulur ve iteratorunu döndürür. Eğer öğe bulunamazsa end() iteratorünü döndürür.
.count(): Belirli bir öğenin set içinde kaç kez bulunduğunu sayar (genellikle 0 veya 1 olur).
Sıralama İşlemleri:

.begin(): set'in başlangıç iterator'ünü döndürür.
.end(): set'in son iterator'ünü döndürür.
rbegin(): Tersten başlangıç iterator'ünü döndürür.
rend(): Tersten son iterator'ünü döndürür.
Diğer:

.lower_bound(): Belirli bir anahtar için alt sınıra işaret eden bir iterator döndürür.
.upper_bound(): Belirli bir anahtar için üst sınıra işaret eden bir iterator döndürür.
!*/
/*
std::set::lower_bound() and std::set::upper_bound() are member functions of the std::set container that return iterators to elements in the set. The lower_bound() function returns an iterator to the first element in the set that is not less than the given value, while the upper_bound() function returns an iterator to the first element in the set that is greater than the given value.
*/
/*
equal_range(): Belirli bir anahtarı içeren öğelerin aralığını döndürür (bir pair içinde first ve second iterator'ları). // auto ile yapılıyor


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
        std::cout << "\n";
        

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
        std::set<char>::iterator it= Set.find('b');

        int count_b = Set.count('b');
        std::cout << "count_b: " << count_b << std::endl;
        int count_S = Set.count('S');
        std::cout << "count_S: " << count_S << std::endl;

    }   
    std::cout << "\n";
    {
        std::set<int> mySet;
        mySet.insert(1);
        mySet.insert(2);
        mySet.insert(3);
        mySet.insert(4);
        mySet.insert(5);

    // Set'in sondan başa doğru ilk elemanını işaretle.
    std::set<int>::reverse_iterator rit = mySet.rbegin();

    // Set'in tüm elemanlarını ters sırada yazdır.
    while (rit != mySet.rend()) {
        std::cout << *rit << " ";
        rit++;
    }

    std::cout << std::endl;
    }
    std::cout << "\n";
    {
        std::set<int> mySet;
        mySet.insert(1);
        mySet.insert(2);
        mySet.insert(3);
        mySet.insert(4);
        mySet.insert(5);

        std::set<int>::iterator i = mySet.lower_bound(3);
        for(;i!=mySet.end();i++)
        {
            std::cout << *i << " ";
        }
        std::cout << "\n";

        std::set<int>::iterator i1 = mySet.upper_bound(3);
        for(;i1!=mySet.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

    }
}



