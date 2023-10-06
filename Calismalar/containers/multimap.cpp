#include <iostream>
#include <map>


//her zaman key valuelarından sıralı
//normal mapte key value'lar unique idi bunda duplicatelileri de bulunabilir
//aynı value ve aynı key birden fazla bulunabilir
// at ve [] burada yok!!!!!!!!!

int main()
{
    std::multimap<char, int> m1;
    m1.insert(std::make_pair('a',1));
    m1.insert(std::make_pair('a',2));
    m1.insert(std::make_pair('a',3));
    m1.insert(std::make_pair('b',21));
    m1.insert(std::make_pair('g',1));

    std::multimap<char, int>::iterator i1,i2;
    for(i1 = m1.begin();i1 != m1.end();i1++)
    {
        std::cout << i1->first << " " << i1->second << std::endl;
    }
    std::cout << std::endl;
    std::multimap<char,int> m2(m1.begin(),m1.end());
    std::multimap<char,int> m3(m1.begin(),m1.end());
    m2.erase(m2.begin(),m2.find('b'));
    for(i2 = m2.begin();i2 != m2.end();i2++)
    {
        std::cout << i2->first << " " << i2->second << std::endl;
    }
    std::cout << std::endl;
    //lower_bound
    std::cout << m1.lower_bound('a')->first << " " << m1.lower_bound('a')->second << std::endl;
    //upper_bound
    std::cout << m1.upper_bound('a')->first << " " << m1.upper_bound('a')->second << std::endl;

    std::cout << std::endl;
    for(i1 = m1.begin();i1 != m1.end();i1++)
    {
        std::cout << i1->first << " " << i1->second << std::endl;
    }
    m1.erase(m1.begin(),m1.find('a'));
    std::cout << "AFTER  m1.erase(m1.begin(),m1.find('a'));" << std::endl;
    for(i1 = m1.begin();i1 != m1.end();i1++)
    {
        std::cout << i1->first << " " << i1->second << std::endl;
    }
    m1.erase('a');
    std::cout << "AFTER  m1.erase('a');" << std::endl;
    for(i1 = m1.begin();i1 != m1.end();i1++)
    {
        std::cout << i1->first << " " << i1->second << std::endl;
    }
    std::cout << std::endl;
    std::pair<std::multimap<char,int>::iterator, std::multimap<char,int>::iterator> range = m3.equal_range('a');
    for(std::multimap<char,int>::iterator i = range.first; i != range.second;i++)
    {
        std::cout << i->first << " " << i->second << std::endl;
    }

}