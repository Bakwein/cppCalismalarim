
#include <iostream>
#include <map>
#include <iterator>
#include <vector>

int main()
{
    {
        std::map<std::string,int> m1;

        m1["sefa"] = 20;
        m1["ali"] = 35;
        m1.insert(std::make_pair<std::string,int>("mehmet",35));

        std::map<std::string,int>::iterator i1;
        for(i1 = m1.begin();i1 != m1.end();i1++)
        {
            std::cout << "Key: " << i1->first << ", Value: " << i1->second <<   std::endl;
        }

        std::cout << "\n";
        m1["ali"] = 2;
        for(i1 = m1.begin();i1 != m1.end();i1++)
        {
            std::cout << "Key: " << i1->first << ", Value: " << i1->second <<   std::endl;
        }
        std::cout << "\n";
        std::map<std::string, int> m2(m1.begin(),m1.end());
        m2.erase(m2.begin(),m2.find("mehmet"));
        for(i1 = m2.begin();i1 != m2.end();i1++)
        {
            std::cout << "Key: " << i1->first << ", Value: " << i1->second <<   std::endl;
        }
        std::cout << "\n";
        int num = m2.erase("mehmet");
        std::cout << "num: " << num << std::endl;
        for(i1 = m2.begin();i1 != m2.end();i1++)
        {
            std::cout << "Key: " << i1->first << ", Value: " << i1->second <<   std::endl;
        }

        std::cout << m2["sefa"] << std::endl;
        if(m2.count("sefa")>0)
            std::cout << "Key 'sefa' is in the map" << std::endl;
        else
            std::cout << "Key 'sefa' is not in the map" << std::endl;
    }
    std::cout << "\n";
    {
        std::map<std::string, std::vector<int> > m3;
        m3["sefa"].push_back(545);
        m3["sefa"].push_back(45);
        m3["boom"].push_back(23);
        //m3.insert(std::make_pair("deneme",23)); yapınca gereksiz bir sürü 0 ekliyor
        m3["deneme"].push_back(52);

        std::map<std::string, std::vector<int> >::iterator i;
        std::vector<int>::iterator i1;
        for(i = m3.begin();i != m3.end();i++)
        {
            std::cout << i->first << std::endl;
            for(i1 = i->second.begin(); i1 != i->second.end();i1++)
            {
                std::cout << *i1 << std::endl;
            }
        }
    }
}