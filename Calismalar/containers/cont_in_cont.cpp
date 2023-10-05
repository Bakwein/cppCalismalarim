#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int> > Tree;
    int edge, n1,n2;
    std::cin >> edge;
    Tree.resize(edge);

    for(int i = 0; i < edge;i++)
    {
        std::cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }

    for(std::vector<std::vector<int> >::iterator i = Tree.begin(); i != Tree.end();i++)
    {
        for(std::vector<int>::iterator i1 = i->begin(); i1 != i->end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";
    }

    /*
    6
    1 3
    2 4
    2 5
    3 6
    3 8
    1 2
    */
}