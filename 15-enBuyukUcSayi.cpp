#include <iostream>

using namespace std;

int main(int argc,char **argv)
{
    (void)argc;
    (void)argv;

    int a[8]={2,7,20,8,9,1,6,15};
    //15-10-5
    
    int as1 = a[0];
    int as2 = a[0];
    int as3 = a[0];
    for(int i = 0;i<8;i++)
    {
        if(as1 < a[i])
        {
            as3 = as2;
            as2 = as1;
            as1 = a[i];
        }
        else if(as2 < a[i])
        {
            as3 = as2;
            as2 = a[i];
        }
        else if(as3 < a[i])
        {
            as3 = a[i];
        }
    }

    cout << "en buyuk 3 sayi: " << as1 << "," << as2 << "," << as3 << endl;
    
   /*int a[8]={2,7,20,8,9,1,6,15};
   int dizi[8] = {0};
   for(int x = 0;x < 8;x++)
   {
    for(int y = 0;y < 8;y++)
    {
        if(a[x] > a[y])
        {
            dizi[x]++;
        }
    }
   }

   for(int ab = 0; ab < 8; ab++)
        cout << dizi[ab]<< endl;
    */

}