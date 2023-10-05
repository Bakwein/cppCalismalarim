
#include <iostream>
#include <map>
#include <iterator>

int main()
{
    std::map<std::string,int> m1;

    m1["sefa"] = 20;
    m1["ali"] = 35;
    m1.insert(std::make_pair<std::string,int>("mehmet",35));

    std::map<std::string,int>::iterator i1;
    for(i1 = m1.begin();i1 != m1.end();i1++)
    {
        std::cout << "Key: " << i1->first << ", Value: " << i1->second << std::endl;
    }



}