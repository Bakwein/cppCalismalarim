#include <iostream>

// array in cpp
#include <array>

//for get()
#include <tuple>
/*
Dizi sınıfları kendi boyutunu bilir, oysa C tarzı diziler bu özelliğe sahip değildir. Yani fonksiyonlara geçerken Array boyutunu ayrı bir parametre olarak geçmemize gerek kalmıyor.

Methodlar;
.array::begin()	Dizinin ilk elemanına bir referans döndürür.
.array::cbegin()	Dizinin ilk elemanına bir const referans döndürür.
.array::end()	Dizinin son elemanının bir sonrakine bir referans döndürür.
.array::cend()	Dizinin son elemanının bir sonrakine bir const referans döndürür.
.array::size()	Dizideki eleman sayısını döndürür.
.array::maxsize() size ile ayni değeri return eder
.array::fill()	Diziyi bir değerle doldurur.
.array::front()	Dizinin ilk elemanını referans olarak döndürür.
.array::back()	Dizinin son elemanını referans olarak döndürür.
.array::at()	Dizideki bir elemana bir referans döndürür.
.array::operator[]()	Dizideki bir elemana bir referans döndürür.
.array::swap()	İki diziyi yer değiştirir.
.array::sort()	Diziyi sıralar.
.array::binary_search()	Dizide bir değer arar.
.data()-> arr.data() : array'ın ilk elemanını gösteren pointerı
*/

int main()
{
    {//size, operator[]
        std::array<int,5> arr = {1,2,3,4,5};

        for(int i =0;i < arr.size() ;i++)
            std::cout << "arr[" << i << "]: " << arr[i] << " "; 
        
        

    }

    {//at()-get()
        std::array<int,5> arr = {1,2};
        //std::cout << get<0>(arr) << " " << get<1>(arr) << "\n\n";

        std::cout << "arr's size: " << arr.size() <<std::endl;
        std::cout << "arr's max size: " << arr.max_size() << std::endl;
        for(int i =0; i < arr.max_size();i++)
        {
            std::cout << arr.at(i) << " ";
        }
    }
    std::cout << "\n\n";
    {//front(),back(),begin(),cbegin(),end(),cend()
        std::array<int,5> arr = {1,2,3,4,5};
        int &arr_front = arr.front();
        int &arr_back = arr.back();

        std::cout << arr_front << " " << arr_back << std::endl;

    }
    std::cout << std::endl;
    {//for-auto, data()
        std::array<int,5> arr = {1,2,3,4,5};
        /*
        for(auto x:arr)
        {
            std::cout << x << " ";
        }
        */
        std::cout << "arr.data()" << std::endl;
        int *p = arr.data();
        for(int i = 0;i < arr.size(); i++)
        {
            std::cout << p[i] << " ";
        }
    }
    std::cout << "\n\n";

    {//swap()
        std::array<int,5> arr = {5,4,3,2,1};
        std::array<int,5> arr2 = {11,12,13,14,15};

        std::cout << "before swap:" << std::endl;
        for(int i = 0; i < arr.size();i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        for(int i = 0; i < arr2.max_size();i++)
        {
            std::cout << arr2.at(i) << " ";
        }
        std::cout << std::endl;
        arr.swap(arr2);
        std::cout << "after swap:" << std::endl;
         for(int i = 0; i < arr.size();i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        for(int i = 0; i < arr2.max_size();i++)
        {
            std::cout << arr2.at(i) << " ";
        }
        std::cout << "\n";

        std::sort(arr2.begin(),arr2.end());
        std::cout << "sorted arr2:";
         for(int i = 0; i < arr2.max_size();i++)
        {
            std::cout << arr2.at(i) << " ";
        }
    }
    std::cout << "\n\n";
    {//empty(),fill(),resize()
        std::array<int,3> x;
        std::array<int,0> a1;
        std::cout << "x.empty(): " << x.empty() << std::endl;
        std::cout << "a1.empty(): " << a1.empty() << std::endl;
        /*for(auto a: x)
        {
            std::cout << a << " ";
        }
        */ 
        x.fill(23);
        a1.fill(43);
        std::cout << "after fill:" << std::endl;
        std::cout << "x->";
        for(int a =0; a < x.size();a++)
        {
            std::cout << x[a] << " ";
        }
        std::cout << "\n";
        std::cout << "a1->";
        for(int a =0; a < a1.size();a++)
        {
            std::cout << a1[a] << " ";
        }
        std::cout << "\n";
        std::cout << "x.empty(): " << x.empty() << std::endl;
        std::cout << "a1.empty(): " << a1.empty() << std::endl;
        
        
        
    }

    {//iterators - begin(),end()
        std::cout << "\n\niteratorler;" << std::endl;
        std::array<int,6> arr = {1,2,3,4,5,6};
        std::array<int, 6>::iterator it;
        for(it = arr.begin(); it < arr.end(); it++)
        {
            std::cout << *it << " ";
        }

        std::cout << std::endl;

        std::array<int,1>::iterator i;//3'de sorun yok sonuna kadar calisir
        //std::array<double,3>::iterator i; böyle double olursa hata verir
        for(i = arr.begin();i < arr.end();i++)
        {
            std::cout << *i << " ";
        }
        std::cout << "\n";
        //std::array<int,6>::iterator i1; cbegin,cend kullanılırken hata alınır
        std::cout << "const iterator" << std::endl;
        std::array<int,1>::const_iterator i1;
        //boyut üsttekindeki gibi sorun yok
        for(i1 = arr.cbegin(); i1 < arr.cend();i1++)
        {
            std::cout << *i1 << " ";
        }

    }

    {//binary_search
    std::cout << "\n\n";
    std::array<int,6> a1 = {1,2,3,4,5,6};
    std::cout << std::binary_search(a1.begin(),a1.end(),3) << std::endl;
    std::cout << std::binary_search(a1.begin(),a1.end(),30) << std::endl;
        
    }


    

}
