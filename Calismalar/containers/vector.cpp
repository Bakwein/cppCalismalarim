#include <iostream>
#include <vector>
#include <algorithm>

/*
Ekleme ve Kaldırma İşlemleri:

.push_back(value): Vektörün sonuna bir eleman ekler.
.pop_back(): Vektörün sonundaki elemanı kaldırır.
.insert(position, value): Belirli bir konuma eleman ekler.
.erase(position): Belirli bir konumdaki elemanı kaldırır.
.clear(): Vektörün tüm elemanlarını kaldırır.
Boyut ve Kapasite İşlemleri:

capacity()
size()
shrink_to_fit()-> capacity size'dan fazlaysa size boyutuna döner
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
assign() – It assigns new value to the vector elements by replacing old ones

.size(): Vektörün içindeki eleman sayısını döndürür.
.capacity(): Vektörün içinde kaç eleman tutabileceğini döndürür.
.resize(new_size): Vektörün boyutunu belirtilen boyuta ayarlar.
.reserve(new_capacity): Vektörün kapasitesini belirtilen kapasiteye ayarlar.
Erişim ve Dolaşma İşlemleri:

.at(index): Belirli bir indeksteki elemana erişir.
.operator[] (index): Belirli bir indeksteki elemana erişir.
.front(): Vektörün başındaki elemana erişir.
.back(): Vektörün sonundaki elemana erişir.
.begin(): Vektörün başlangıç iterator'ünü döndürür.
.end(): Vektörün son iterator'ünü döndürür.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

Sıralama İşlemleri:
.sort(): Vektörün elemanlarını sıralar.
.reverse(): Vektörün elemanlarını tersine çevirir.
Arama İşlemleri:

.find(value): Belirtilen bir değeri arar ve ilk bulunan indeksi döndürür.
.count(value): Belirtilen bir değerin vektör içinde kaç kez bulunduğunu sayar.
.binary_search(value): Belirtilen bir değeri ikili arama algoritmasıyla arar.dizinin sıralanmış olması lazim
Diğer İşlemler:

.empty(): Vektörün boş olup olmadığını kontrol eder.
.swap(other_vector): İki vektörün içeriğini değiştirir.
.emplace_back(args): Yeni bir eleman eklerken in-place yapar (kopyalama yerine doğrudan oluşturma). ( c+11 OLMALI!!!!)
//v.emplace(v.begin(), std::move(s1));
//v.emplace_back(1);
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

    {
        //std::vector<int> v1; boyutsuz tanımlayıp push_back ile eleman eklenebilir lakin normal v1[i] = i; şeklinde atama yapılamaz
        std::vector<int> v1(4);
        std::vector<int> v2(3);

        for(int i = 0; i < 4; i++)
        {
            v1[i] = i;
        } // uzunluğu verilmeden oluşturulan vectorlerde bu işlem seg fault yok açıyor
        for(int i = 0;i<3;i++)
        {
            v2.push_back(i*10);
        }

        std::cout << "v1:";
        std::vector<int>::iterator i;
        for(i = v1.begin(); i < v1.end();i++)
        {
            std::cout << *i << " ";
        }
        std::cout << "\n";
        ////v2'nin boyutu olmadığından dolayı const_iteratorde hata alınıyordu.
        std::vector<int>::const_iterator i1 = v2.cbegin();
        //front() ile back() iterator döngüsünde kullanılamaz
        std::cout << "v2:";
        while(i1 < v2.cend())
        {
            std::cout << *i1 << " ";
            i1++;
        }
        std::cout << "\n\n";
        v1.swap(v2);
        std::cout << "v1:";
        std::vector<int>::iterator i3;
        for(i3 = v1.begin(); i3 < v1.end();i3++)
        {
            std::cout << *i3 << " ";
        }
        std::cout << "\n";
        std::vector<int>::const_iterator i4 = v2.cbegin();
        //front() ile back() iterator döngüsünde kullanılamaz
        std::cout << "v2:";
        while(i4 < v2.cend())
        {
            std::cout << *i4 << " ";
            i4++;
        }
        std::cout << "\n\n";

        reverse(v2.begin(),v2.end());
        std::cout << "v2:";
        std::vector<int>::iterator i5;
        for(i5 = v2.begin(); i5 < v2.end();i5++)
        {
            std::cout << *i5 << " ";
        }
        sort(v2.begin(),v2.end());
        std::cout << "\nafter sort v2:";
        std::vector<int>::iterator i6;
        for(i6 = v2.begin(); i6 < v2.end(); i6++)
        {
            std::cout << *i6 << " ";
        }
    }
    std::cout << "\n\n\n";
    {
        std::vector<int> vec(5);
        std::vector<int>::iterator i1;
        for(i1 = vec.begin(); i1 < vec.end();i1++)
        {
            *i1 = 20;
        }
        vec.front() = 32;
        vec.back() = 23;
        std::cout << "vec:";
        for(i1 = vec.begin();i1 < vec.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

        std::vector<int>::iterator i2 = find(vec.begin(),vec.end(),23); // <algorithm>
        for(;i2>vec.begin()-1;i2--) // i2>vec.begin()-1 == i2 >= vec.begin()
        {
            std::cout << *i2 << " ";
        }
        std::cout <<  "\n\n";
        int count_20 = count(vec.begin(),vec.end(), 20);
        std::cout << "count20:" << count_20 << std::endl;


        sort(vec.begin(),vec.end()); // binary search yapılacaksa vector sıralı olmak zorunda
        std::cout << binary_search(vec.begin(),vec.end(),2) << std::endl;
        std::cout << binary_search(vec.begin(),vec.end(),20) << std::endl;
        
        
    }

    {
        //std::vector<int> v4 = {1,2,3,4,5}; HATA
        std::vector<int> v63(5,36); //SORUN YOK
       std::vector<int> v1(6);
  std::vector<int> v2;

  // v1'in kapasitesi 6'dır.
  std::cout << "v1.capacity() = " << v1.capacity() << " - v1.size() = " << v1.size() << std::endl;

   std::cout << "v2.capacity() = " << v2.capacity() << " - v2.size() = " << v2.size() << std::endl;

  // v1'e dört eleman ekleyin.
  for (int i = 0; i < 4; i++) {
    v1.push_back(i * 10);
  }

  // v2'ye dört eleman ekleyin.
  for (int i = 0; i < 4; i++) {
    v2.push_back(i * 10);
  }

  // v1 ve v2'nin kapasitelerini ve boyutlarını yazdırın.
  std::cout << "v1.capacity() = " << v1.capacity() << " - v1.size() = " << v1.size() << std::endl;
  std::cout << "v2.capacity() = " << v2.capacity() << " - v2.size() = " << v2.size() << std::endl;
      
      
      
      
      v1.shrink_to_fit();
      v2.shrink_to_fit();
       std::cout << "v1.capacity() = " << v1.capacity() << " - v1.size() = " << v1.size() << std::endl;
  std::cout << "v2.capacity() = " << v2.capacity() << " - v2.size() = " << v2.size() << std::endl;


    std::cout << "max_size(): " << v1.max_size() << " " << v2.max_size() << std::endl;
    }
    {
        std::vector<int> v;
        v.assign(5,20);

        std::vector<int>::iterator i;
        for(i = v.begin(); i < v.end(); i++)
        {
            std::cout << *i<< " ";
        }
    
    }
    

}