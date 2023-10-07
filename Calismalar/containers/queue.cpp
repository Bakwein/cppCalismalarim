#include <iostream>
#include <queue>

//FIFO
//empty,size,swap,emplace not in c+11,front,back,push(g),pop
int main()
{
    std::queue<int> q;
    q.push('A');
    q.push(1);
    q.push(2);

    std::cout << "q.size(): "<<q.size() << std::endl;

    while(q.size() > 0) // while(!que.empty())'de kullanılabilirdi
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }
    std::cout << "q.size(): "<<q.size() << std::endl;
}
