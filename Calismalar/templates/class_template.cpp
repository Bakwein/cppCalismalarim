#include <iostream>

template <typename T> 
class Array
{
    private:
        T* ptr;
        int size;
    public:
        Array(T arr[], int s);
        void print();
};

template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for(int i = 0; i < size ; i++)
        ptr[i] = arr[i];
}

template <typename S>
void Array<S>::print()
{
    for(int i = 0; i < size; i++)
        std::cout << " " << ptr[i];
    std::cout << std::endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    Array<int> a(arr,5);
    a.print();

    //Array b(arr,5); HATA 
    //b.print();
    // 'Array' requires template arguments

    
}