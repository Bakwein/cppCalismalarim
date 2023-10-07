#include <iostream>
#include <queue>

int main()
{
    {
        std::priority_queue<int> pq;
        pq.push(10);
        pq.push(2);
        pq.push(4);
        pq.push(8);
        pq.push(6);
        pq.push(9);

        //yanındayken direkt olmuyor atama yaptığın şey ile aynı olması lazım
        std::priority_queue<int> pq2 = pq;

        std::cout << "pq size: " << pq.size() << std::endl;
        while(!pq.empty())
        {
            std::cout << pq.top() << " ";
            pq.pop();
        }
        std::cout << "\n";
        std::cout << "pq size: " << pq.size() << std::endl;
    }
    std::cout << "\n";
    {
        std::priority_queue<int, std::vector<int>,std::greater<int> > pq;
        pq.push(10);
        pq.push(2);
        pq.push(4);
        pq.push(8);
        pq.push(6);
        pq.push(9);

        std::priority_queue<int,std::vector<int>,std::greater<int> > pq2;
        pq2.push(5);
        pq2.push(83);
        pq2.push(46);
        pq2.push(82);
        pq2.push(-21);
        pq2.push(-55);

        
        std::cout << "\n";

        std::cout << "AFTER pq.swap(pq2)"<< std::endl;
        pq.swap(pq2);
        while(!pq.empty())
        {
            std::cout << pq.top() << " ";
            pq.pop();
        }
        std::cout << "\n";
        while(!pq2.empty())
        {
            std::cout << pq2.top() << " ";
            pq2.pop();
        }
        std::cout << "\æçn";


    }
}