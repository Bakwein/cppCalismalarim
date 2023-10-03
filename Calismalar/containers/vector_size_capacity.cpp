#include <iostream>
#include <vector>

int main()
{
    {
        std::vector<int> v1;
        for(int i = 0; i < 17; i++)
        {
            v1.push_back(i);
            std::cout << "size: " << v1.size() << " - capacity(): " << v1.capacity() << std::endl; 
        }
    }
    std::cout << "\n";
    {
        std::vector<int> v2;
        v2.reserve(120);
        for(int i = 0; i < 17; i++)
        {
            v2.push_back(i);
            std::cout << "size: " << v2.size() << " - capacity(): " << v2.capacity() << std::endl; 
        }
    }
    std::cout << "\n";
    {
        std::vector<int> v3;
        v3.resize(120);
        for(int i = 0; i < 17; i++)
        {
            v3.push_back(i);
            std::cout << "size: " 
            << v3.size() << " - capacity(): " << v3.capacity() << std::endl; 
        }
    }
}