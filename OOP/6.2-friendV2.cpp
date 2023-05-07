#include <iostream>

using namespace std;

class A
{
    int x;
    public:
        int getX();
        void setX(int);
    friend ostream& operator << (ostream&,A& obj);
};

int A::getX(){return x;}

void A::setX(int _x){x = _x;}

ostream& operator << (ostream& o, A& obj)
{
    o << "A sinifindaki x:" << obj.x;
    return o;
}

/*
 "friend" keyword'ü "operator <<" işlevi ile kullanılmıştır. Bu, "operator <<" işlevinin A sınıfının özel veri üyelerine (burada "x") erişmesini sağlar ve "operator <<" işlevi A sınıfının özel veri üyelerine doğrudan erişebilir.

Bu sayede, "operator <<" işlevi A sınıfının özel veri üyelerine doğrudan erişebilir ve "a" nesnesinin "x" değerini yazdırabilir. Bu nedenle, "friend" keyword'ü bu durumda bir fonksiyonun başka bir sınıfın özel veri üyelerine erişmesine olanak sağlamaktadır.
*/


int main()
{
    A a;
    a.setX(44);
    cout << a;
}