#include <iostream>
#include <forward_list>

//tekli linked list
//Listeden farkı, ileri listenin yalnızca bir sonraki öğenin konumunu takip etmesi, listenin ise hem sonraki hem de önceki öğeleri takip etmesi, böylece her öğeyi depolamak için gereken depolama alanını artırmasıdır. İleriye doğru listenin dezavantajı, geriye doğru yinelenememesi ve bireysel öğelerine doğrudan erişilememesidir.
int main()
{
    {
        std::forward_list<int> f1;
        //assign()
        f1.assign(5,90); // 90 90 90 90 90

        std::forward_list<int>::iterator i1;
        //begin(),end()
        for(i1 = f1.begin();i1 != f1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << "\n";
        std::forward_list<char> f2(f1.begin(),f1.end()); // Z Z Z Z Z
        std::forward_list<char>::iterator i2;
        for(i2 = f2.begin();i2 != f2.end();i2++)
        {
            std::cout << *i2 << " ";
        }
        std::cout << "\n";

        //push_front()
        f1.push_front(2);
        //f1.emplace_front(42); // not in c+11 
        for(i1 = f1.begin();i1 != f1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;
        //pop_front()
        f1.pop_front();
        for(i1 = f1.begin();i1 != f1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    {
        std::forward_list<int> fl1;
        fl1.push_front(50);
        fl1.push_front(40);
        fl1.push_front(30);
        fl1.push_front(20);
        fl1.push_front(10);
        std::forward_list<int>::iterator i1;
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;

        std::forward_list<int>::iterator ptr;
        ptr = fl1.insert_after(fl1.begin(), 2); // second position
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;
 
        /*ptr = fl1.emplace_after(ptr,3); c++11
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;*/


        ptr = fl1.erase_after(ptr); //ptrden sonraki bölüm silindi
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl << std::endl;

        fl1.push_front(70);
        fl1.push_front(70);
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;
        //fl1.unique()
        fl1.unique();
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;
        
        //resize()
        fl1.resize(4);
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;
        //reverse()
        fl1.reverse();
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;

        //remove_if([]()) COMPILE OLMUYOR
        // error: expected expression
        //fl1.remove_if([] (int x){return x > 20;});
       /* fl1.remove_if([] (int x){return x > 20;}); // 20den büyük elemanları siler
        for(i1 = fl1.begin();i1 != fl1.end();i1++)
        {
            std::cout << *i1 << " ";
        }
        std::cout << std::endl;
        */
       
       std::cout << "fl1.empty(): " << fl1.empty() << std::endl;
       fl1.clear();
       std::cout << "after clear -> fl1.empty(): " << fl1.empty() << std::endl;


        
    }


}