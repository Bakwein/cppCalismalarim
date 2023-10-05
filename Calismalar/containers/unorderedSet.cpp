#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
    std::unordered_set<std::string> strSet;

    strSet.insert("sefa");
    strSet.insert("tunca");
    strSet.insert("cpp");
    strSet.insert("sef");

    std::string key = "boom";
    if(strSet.find(key) == strSet.end())
    {
        std::cout << key << " not found" << std::endl;
    }
    else
    {
        std::cout << key << " found!" << std::endl;
    }

    key = "cpp";
    if(strSet.find(key) == strSet.end())
    {
        std::cout << key << " not found" << std::endl;
    }
    else
    {
        std::cout << key << " found!" << std::endl;
    }

    std::cout << "strSet: ";
    for(std::unordered_set<std::string>::iterator i = strSet.begin(); i!= strSet.end();i++)
    {
        std::cout << *i << " ";
    }
    return 0;
}