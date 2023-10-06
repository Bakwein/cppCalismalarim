#include <iostream>
#include <set>

//c+11 ve öncesi desteklemiyor
class A
{
    public:
        int x;
        A(int x = 0): x(x) {std::cout << "Const." << std::endl;}
        A(const A&rhs) {x = rhs.x;std::cout << "copy"<<std::endl;}
};

bool operator< (const A& lhs, const A& rhs){return lhs.x < rhs.x;}

int main()
{
    std::set<A> s;
    s.insert(A(10));
    for(std::set<A>::iterator i = s.begin();i != s.end(); i++)
    {
        std::cout << i->x << " ";
    }
    std::cout << "\n\n";

    s.emplace(20);
    for(std::set<A>::iterator i = s.begin();i != s.end(); i++)
    {
        std::cout << i->x << " ";
    }

}

/*
Const.
copy
10 

Const.
10 20 

*/