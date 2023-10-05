#include <iostream>
#include <set>
#include <iterator>

int main()
{
    std::multiset<int,std::greater<int> > m1;

    m1.insert(40);
    m1.insert(30);
    m1.insert(60);
    m1.insert(20);
    m1.insert(50);

    m1.insert(50); //!!!
    std::multiset<int, std::greater<int> >::iterator i;

    for(i = m1.begin(); i!=m1.end();i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\n";
    std::multiset<int> m2(m1.begin(),m1.end());
    m2.erase(m2.begin(),m2.find(30)); // 30a kadar olan kısmı sil
    for(i = m2.begin();i != m2.end();i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\n";
    //lower_bound,upper_bound
    std::cout << "m1.lower_bound(40) :" << *m1.lower_bound(40) << std::endl;

    std::cout << "m1.upper_bound(40) :" << *m1.upper_bound(40) << std::endl;

    std::cout << "m1.lower_bound(32) :" << *m1.lower_bound(32) << std::endl;

    std::cout << "m1.upper_bound(32) :" << *m1.upper_bound(32) << std::endl;

    std::cout << "\n";
    /*
    Removing Element From Multiset Which Have Same Value:

    a.erase() – Remove all instances of element from multiset having the same value
    a.erase(a.find()) – Remove only one instance of element from multiset having same value
    */
   std::cout << "m1.count(50): " << m1.count(50) << std::endl;
   std::cout << "m2.count(50): " << m2.count(50) << std::endl;
   std::cout << "m1.count(-20): " << m1.count(-20) << std::endl;

   m1.erase(50);
   std::cout << "after m1.erase(50) m1.count(50): " << m1.count(50) << std::endl;

   m2.erase(m2.find(50));
   std::cout << "after m2.erase(m2.find(50)) m2.count(50): " << m2.count(50) << std::endl;

}

/*
60 50 50 40 30 20 
30 40 50 50 60 
m1.lower_bound(40) :40
m1.upper_bound(40) :30
m1.lower_bound(32) :30
m1.upper_bound(32) :30

m1.count(50): 2
m2.count(50): 2
m1.count(-20): 0
after m1.erase(50) m1.count(50): 0
after m2.erase(m2.find(50)) m2.count(50): 1

*/