#include <iostream>

using namespace std;

int x = 3;
void Foo()
{
    int x = 5;
    cout << x<< endl;;
}

void Boo()
{
    int x = 7;
    cout << x<<endl;;
}

int main()
{
    /*
    cout << x; // 3
    */

   /*
    int x = 10;
    cout << x;
   */
  
  /*
    Foo();
    cout << x; //5
               // 3
  */
    Foo(); // 5
    Boo(); // 7
    cout << x << endl; // 3
    int x = 55;
    cout << x << endl; // 55
}