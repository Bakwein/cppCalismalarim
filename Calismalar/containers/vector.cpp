#include <iostream>
#include <vector>

/*
Ekleme ve Kaldırma İşlemleri:

.push_back(value): Vektörün sonuna bir eleman ekler.
.pop_back(): Vektörün sonundaki elemanı kaldırır.
.insert(position, value): Belirli bir konuma eleman ekler.
.erase(position): Belirli bir konumdaki elemanı kaldırır.
.clear(): Vektörün tüm elemanlarını kaldırır.
Boyut ve Kapasite İşlemleri:

.size(): Vektörün içindeki eleman sayısını döndürür.
.capacity(): Vektörün içinde kaç eleman tutabileceğini döndürür.
.resize(new_size): Vektörün boyutunu belirtilen boyuta ayarlar.
.reserve(new_capacity): Vektörün kapasitesini belirtilen kapasiteye ayarlar.
Erişim ve Dolaşma İşlemleri:

at(index): Belirli bir indeksteki elemana erişir.
operator[] (index): Belirli bir indeksteki elemana erişir.
front(): Vektörün başındaki elemana erişir.
back(): Vektörün sonundaki elemana erişir.
begin(): Vektörün başlangıç iterator'ünü döndürür.
end(): Vektörün son iterator'ünü döndürür.
Sıralama İşlemleri:

sort(): Vektörün elemanlarını sıralar.
reverse(): Vektörün elemanlarını tersine çevirir.
Arama İşlemleri:

find(value): Belirtilen bir değeri arar ve ilk bulunan indeksi döndürür.
count(value): Belirtilen bir değerin vektör içinde kaç kez bulunduğunu sayar.
binary_search(value): Belirtilen bir değeri ikili arama algoritmasıyla arar.
Diğer İşlemler:

.empty(): Vektörün boş olup olmadığını kontrol eder.
swap(other_vector): İki vektörün içeriğini değiştirir.
emplace_back(args): Yeni bir eleman eklerken in-place yapar (kopyalama yerine doğrudan oluşturma).
*/

int main()
{
    { // push_back(),pop_back(),size(),resize()
        std::vector<int> v1;
        for(int i = 0;i < 5; i++)
            v1.push_back(i);
        std::cout << "v1:";
        for(int i = 0;i<v1.size();i++)
        {
            std::cout << v1[i] << " ";
        }
        std::cout << "\n";
        for(int i = 0;i<3;i++)
            v1.pop_back();
        std::cout << "\nafter pop_back()\nv1:";
        for(int i = 0;i<v1.size();i++)
        {
            std::cout << v1[i] << " ";
        }
        std::cout << "\n";
        v1.resize(1);
        std::cout << "\nafter resize \nv1:";
        for(int i = 0;i<v1.size();i++)
        {
            std::cout << v1[i] << " ";
        }
        v1.reserve(6);
        std::cout << "\nafter reserve \nv1:";
        for(int i = v1.size();i<v1.capacity();i++)
        {
            v1[i] = i;
            std::cout << v1[i] << " "; // v1:1 2 3 4 5 6 7 
        }
    }
    std::cout << "\n\n\n";
    {
        //std::vector<int> v = {1, 2, 3, 4, 5}; HATA!!
        /*non-aggregate type 'std::vector<int>' cannot be initialized with an initializer list
        std::vector<int> v = {1, 2, 3, 4, 5};*/
        
        std::vector<int> v;
        for(int i = 0;i < 5;i++)
        {
            v.insert(v.begin()+i,i);
        }

        for(int i = 0;i < v.size();i++)
            std::cout << v[i] << " ";
        std::cout << "\n\n";
        // Vektörden ilk elemanı silin.
        v.erase(v.begin());
        
        for(int i = 0;i < v.size();i++)
            std::cout << v[i] << " ";
        std::cout << std::endl;
        std::cout << "Vektörün boyutu: " << v.size() << std::endl;
        // Vektörden 2 ile 4 arasındaki elemanları silin.
        v.erase(v.begin() + 1, v.begin() + 3); // sağdaki dahil değilß
        for(int i = 0;i < v.size();i++)
            std::cout << v[i] << " ";
        std::cout << std::endl;
        std::cout << "Vektörün boyutu: " << v.size() << std::endl;
        // Vektörün tüm elemanlarını silin.
        v.erase(v.begin(), v.end());
        // Vektörün boyutunu yazdırın.
        for(int i = 0;i < v.size();i++)
            std::cout << v[i] << " ";
        std::cout << std::endl;
        std::cout << "Vektörün boyutu: " << v.size() << std::endl;

        std::cout << std::endl;
        std::cout << v.empty() << std::endl;
        v.push_back(32);
        std::cout << v.empty() << std::endl;
        v.clear();

    }

    {/*
        std::cout << "deneme";
        std::vector<int> v1;
        std::vector<std::string> v2;

        for(int i = 0; i < 4; i++)
        {
            v1[i] = i;
        }
        for(int i = 0;i<3;i++)
        {
            v2.push_back("deneme");
        }

        std::vector<int>::iterator i;
        for(i = v1.begin(); i < v1.end();i++)
        {
            std::cout << *i << " ";
        }
        std::cout << "\n";
        std::vector<std::string>::const_iterator i1 = v2.begin();
        //front() ile back() iterator döngüsünde kullanılamaz
        while(i1 < v2.end())
        {
            std::cout << *i1 << " ";
            i1++;
        }
    */}

}