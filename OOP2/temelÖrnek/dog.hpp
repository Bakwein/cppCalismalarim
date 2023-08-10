#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>

class Dog
{
    private:
        std::string name;
        std::string breed;
        int age;
        std::string color;
        std::string xd;
    
    public:
        Dog();
        Dog(std::string name_, std::string breed_, int age_, std::string color_);
        void Eat();
        void Sleep();
        void Sit();
        void Run();

        ~Dog();

        std::string getName();
        void setName(std::string name_);

        std::string getBreed();
        void setBreed(std::string breed_);

        int getAge();
        void setAge(int age_);

        std::string getColor();
        void setColor(std::string color_);

        
};

#endif