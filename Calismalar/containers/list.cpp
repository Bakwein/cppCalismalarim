#include <iostream>
#include <list>

// double linked list
//Listeler, bitişik olmayan bellek tahsisine izin veren sıra kaplarıdır

int main()
{
    {
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);
        l.push_front(0);
        l.insert(l.begin(),-1);
        std::cout << l.front() << " " << l.back();
        std::cout << "\n";
        std::list<int>::iterator i1;
        for(i1 = l.begin(); i1 != l.end() ; i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";
        std::cout << "size-maxsize before pop_back and pop_front -> " << l.size() <<"-" << l.max_size()<< std::endl;
        l.pop_back();
        l.pop_front();
        for(i1 = l.begin(); i1 != l.end() ; i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";
        std::cout << "size-maxsize after pop_back and pop_front -> " << l.size() <<"-" << l.max_size()<< std::endl;
        l.clear();
        std::cout << "size-maxsize after clear -> " << l.size() <<"-" << l.max_size()<< std::endl;
    }
    std::cout << "\n";
    {
        std::list<int> l;
        l.push_back(1);
        l.push_back(23);
        l.push_back(2);
        l.push_back(3);
        l.push_front(0);
        l.push_back(-3);
        l.push_front(41);
        l.push_back(2);
        l.push_front(0);

        std::list<int>::iterator i1;
        std::cout << "l: ";
        for(i1 = l.begin(); i1 != l.end() ; i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

        l.remove(0); // tüm 0lar silindi
        std::cout << "after l.remove(0): ";
         for(i1 = l.begin(); i1 != l.end() ; i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

        std::list<int> l2 = l;
        l2.sort();

        std::cout << "sort l2: ";
        for(i1 = l2.begin() ; i1 != l2.end() ; i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

        l2.unique();
        std::cout << "unique l2: ";
        for(i1 = l2.begin() ; i1 != l2.end() ; i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";
        
        l2.resize(2);
        std::cout << "after l2.resize(2) :";
        for(i1 = l2.begin() ; i1 != l2.end() ; i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

        l2.erase(l2.begin(),l2.end());
        std::cout << "l2.empty(): "<<l2.empty() << std::endl;


    

    }
    std::cout << "\n";
    {
        std::list<int> l1;
        //l1.insert()
        l1.push_back(23);
        l1.push_back(23);
        l1.push_back(-3);
        l1.push_back(42);
        l1.push_back(-41);
        l1.push_back(0);

        std::list<int>::iterator i1;
        for(i1 = l1.begin();i1 != l1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";
        l1.reverse();
        std::cout << "after reverse l1:";
        for(i1 = l1.begin();i1 != l1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

        std::list<int> l2;
        l2.push_back(52);
        l2.push_back(-2);
        l2.push_back(-100);

        std::list<int>l1_temp = l1;

        l1.merge(l2);
        std::cout << "after l1.merge(l2): ";
        for(i1 = l1.begin();i1 != l1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";


        l1 = l1_temp;
        std::list<int> l3;
        l2.push_back(52);
        l2.push_back(-2);
        l2.push_back(-100);
        
        std::cout  << "\n";
        std::cout << "l1: ";
        for(i1 = l1.begin();i1 != l1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";
        std::cout << "l2: ";
        for(i1 = l2.begin();i1 != l2.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";

        l1.splice(l1.begin(),l2);
        std::cout << "after l1.splice(l1.begin(),l2): ";
        for(i1 = l1.begin();i1 != l1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";



        
    }
}