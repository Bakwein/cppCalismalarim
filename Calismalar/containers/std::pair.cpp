#include <iostream>
#include <vector>

int main()
{
    {
        std::pair<int, int> obj(10,20);
        std::cout << obj.first << " " << obj.second << std::endl;
    }
    std::cout << "\n";
    {
        std::pair<int,int> obj = std::make_pair(10,20);
        std::cout << obj.first << " " << obj.second << std::endl;
    }
    std::cout << "\n";
    {
        std::vector<std::pair<std::string,uint> > list;
        list.push_back(std::make_pair("sefa",20));
        list.push_back(std::make_pair("ali",4));
        list.push_back(std::pair<std::string,uint>("deneme",23));
        list.push_back(std::pair<std::string,uint>("hop",-55));

        std::vector<std::pair<std::string,uint> >::iterator i1;
        for(i1 = list.begin(); i1 != list.end(); i1++)
        {
            std::cout << i1->first << " " << i1->second << std::endl;
        }
    }
}