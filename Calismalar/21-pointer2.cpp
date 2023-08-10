#include <iostream>

using namespace std;

int main()
{
    int dizi[5];
    for(int i=0;i<5;i++)
    {
        cout << "dizi[" << i << "]:";
        cin >> dizi[i];
    }


    for(int i = 0; i < 5;i++)
    {
        cout << dizi[i] << endl;
    }

    int dizi1[5];
    int *ptr;
    ptr = dizi;
    for(int i = 0; i < 5;i++)
    {
        cout << "ptr[" << i << "]:";
        cin >> ptr[i];
    }
    for(int i = 0; i < 5;i++)
    {
        cout << dizi[i]<< " " <<ptr[i] << endl;
    }

    int *p1 = (int *)malloc(sizeof(int)*5);
    for(int i = 0; i < 5;i++)
    {
        cout << "p1[" << i << "]:";
        cin >> p1[i];
    }
    for(int i = 0; i < 5;i++)
    {
        cout << p1[i] << endl;
    }

      int *p2 = (int*)malloc(sizeof(int) * 5);
      for(int i = 0; i < 5; i++)
      {
          cout << "p1[" << i << "]:";
          cin >> *(p2+i);
      }
      for(int i = 0; i < 5;i++)
        {
        cout << *(p2+i) << endl;
        }
    return 0;
}