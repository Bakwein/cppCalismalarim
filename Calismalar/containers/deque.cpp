#include <iostream>
#include <deque>

int main()
{
    std::deque<int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    d.push_front(15);

    std::cout << d.front() << " " << d.back() << std::endl;

    std::deque<int>::iterator i1;
    for(i1 = d.begin(); i1 != d.end(); i1++)
    {
        std::cout << *i1 << " ";
    }
    std::cout << "\n";

    std::cout << "\nd.size() : " << d.size();
    std::cout << "\nd.max_size() : " << d.max_size();
    std::cout << "\nd.at(2) : " << d.at(2);
    std::cout << "\nd.front() : " << d.front();
    std::cout << "\nd.back() : " << d.back();
    std::cout << "\nd.pop_front() : ";
    d.pop_front();
    std::cout << "\nd.pop_back() : ";
    d.pop_back();
    for(i1 = d.begin(); i1 != d.end(); i1++)
    {
        std::cout << *i1 << " ";
    }
    std::cout << "\n";
    
    d.resize(1);
    std::cout << "after resize(1): ";
    for(i1 = d.begin(); i1 != d.end(); i1++)
    {
        std::cout << *i1 << " ";
    }
    std::cout << "\n";

    
   

}