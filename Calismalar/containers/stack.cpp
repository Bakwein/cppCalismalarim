#include <iostream>
#include <stack>

//LIFO  
int main()
{
    std::stack<int> s;
    s.push(23);
    s.push('A');
    s.push(42);
    s.push(5);
    s.push(-2);
    std::cout << "s size: " << s.size() << std::endl;
    while(!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    std::cout << "s size: " << s.size() << std::endl;
}