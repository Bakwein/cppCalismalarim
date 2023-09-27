#include <iostream>

// array in cpp
#include <array>

//for get()
#include <tuple>
/*
Dizi sınıfları kendi boyutunu bilir, oysa C tarzı diziler bu özelliğe sahip değildir. Yani fonksiyonlara geçerken Array boyutunu ayrı bir parametre olarak geçmemize gerek kalmıyor.

Methodlar;
array::begin()	Dizinin ilk elemanına bir referans döndürür.
array::cbegin()	Dizinin ilk elemanına bir const referans döndürür.
array::end()	Dizinin son elemanının bir sonrakine bir referans döndürür.
array::cend()	Dizinin son elemanının bir sonrakine bir const referans döndürür.
array::size()	Dizideki eleman sayısını döndürür.
array::maxsize() size ile ayni değeri return eder
array::resize()	Dizi boyutunu değiştirir.
array::fill()	Diziyi bir değerle doldurur.
array::front()	Dizinin ilk elemanını döndürür.
array::back()	Dizinin son elemanını döndürür.
array::at()	Dizideki bir elemana bir referans döndürür.
array::operator[]()	Dizideki bir elemana bir referans döndürür.
array::push_back()	Diziye bir eleman ekler.
array::pop_back()	Diziden bir eleman siler.
array::insert()	Diziye bir eleman ekler.
array::erase()	Diziden bir eleman siler.
array::swap()	İki diziyi yer değiştirir.
array::sort()	Diziyi sıralar.
array::binary_search()	Dizide bir değer arar.
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
        std::cout << get<0>(arr) << " " << get<1>(arr) << "\n\n";

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


        std::array<int, 5>::iterator it;
        for(it = arr.begin(); it < arr.end(); it++)
        {
            std::cout << *it << std::endl;
        }
    }
    std::cout << std::endl;
    {//for-auto
        std::array<int,5> arr = {1,2,3,4,5};
        for(auto x:arr)
        {
            std::cout << x << " ";
        }
    }
    std::cout << "\n\n";

    {//swap()
        std::array<int,5> arr = {1,2,3,4,5};
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

    }
    std::cout << "\n\n";
    {//empty(),fill()
        std::array<int,3> x;
        std::array<int,0> a1;
        std::cout << "x.empty(): " << x.empty() << std::endl;
        std::cout << "a1.empty(): " << a1.empty() << std::endl << std::endl;
        for(auto a: x)
        {
            std::cout << a << " ";
        }
        std::cout << std::endl; 
        x.fill(23);
        
        for(auto a: x)
        {
            std::cout << a << " ";
        }

    }


    

}
