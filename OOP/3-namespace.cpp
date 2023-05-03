#include <iostream>

using namespace std;

namespace pr1{
    int x = 15;
    void Boo()
    {
        int x = 7;
        cout << x << endl;
    }
}

namespace pr2
{
    int x=20;
    void Foo()
    {
        int x = 5;
        cout << x << endl;
    }
}

int main()
{
    cout << pr1::x << endl; // 15
    cout << pr2::x << endl; // 20
    pr1::Boo(); // 7
    pr2::Foo(); // 5
}