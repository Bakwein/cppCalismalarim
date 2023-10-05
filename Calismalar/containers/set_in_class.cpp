#include <iostream>
#include <string>
#include <set>
#include <functional>
// derleyemedim ama böyle bir şey var xD
class Person
{
    public:
        float age;
        std::string name;
    bool operator<(const Person &rhs)const{return age<rhs.age;}
    bool operator>(const Person &rhs)const{return age>rhs.age;}
};


int main()
{

    std::set<Person> s2;
    s2.insert({30,"sefa"});
    s2.insert({20,"sefa"});
    s2.insert({40,"sefa"});


    std::set<Person, std::greater<Person>> s3;
    // std::set<Person, std::less<Person>> s4;
    s3.insert({30,"sefa"});
    s3.insert({20,"sefa"});
    s3.insert({40,"sefa"});

    for(const auto& e: s3)
    {
        std::cout << e.age << " " << e.name << std::endl;
    }
    return 0;



    return 0;
}