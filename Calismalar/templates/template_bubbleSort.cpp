#include <iostream>
#include <string>

template <typename S>
void bubleSort(S x[],int len)
{
    for(int a =0; a < len;a++)
    {
        for(int b = a+1;b < len ; b++)
        {
            if(x[a] > x[b])
            {
                int temp = x[b];
                x[b] = x[a];
                x[a] = temp;
            }
        }
    }
}

template <typename S>
void printArr(S x[], int len)
{
    std::cout << "{";
    int a = 0;
    for(; a <len-1; a++)
    {
        
        std::cout << x[a] << ",";
    }
    std::cout << x[a] << "}" << std::endl;
}


int main()
{
    int int_dizi[6] = {2,5,15,3,256,-42};
    printArr(int_dizi,sizeof(int_dizi)/sizeof(int_dizi[0]));
    bubleSort(int_dizi,sizeof(int_dizi)/sizeof(int_dizi[0]));
    printArr(int_dizi,sizeof(int_dizi)/sizeof(int_dizi[0]));


    float float_dizi[6] = {12412.124, -12312.21, -12.2,12.2,0.02,24};
    printArr(float_dizi,sizeof(float_dizi)/sizeof(float_dizi[0]));
    bubleSort(float_dizi,sizeof(float_dizi)/sizeof(float_dizi[0]));
    printArr(float_dizi,sizeof(float_dizi)/sizeof(float_dizi[0]));

}