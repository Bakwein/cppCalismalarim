#include "dog.hpp"

Dog::Dog()
{
    std::cout << "Default cons."<< std::endl;
    this->name = "";
    this->breed = "";
    //this->age = 0;
    age = 0;
    this->color = "";
}

Dog::Dog(std::string name_, std::string breed_, int age_, std::string color_)
{
    std::cout << "Const." << std::endl;
    name = name_;
    breed = breed_;
    age = age_;
    color = color_;
}

Dog::~Dog()
{
    if(name.size() != 0)
        std::cout << name <<"'s Destructor." << std::endl;
    else
        std::cout << "Default's Destructor." << std::endl;
}

void Dog::Eat()
{
    std::cout << name << " is eating something" << std::endl;
}

void Dog::Sleep()
{
    std::cout << name << " is sleeping something" << std::endl;
}
void Dog::Sit()
{
    std::cout << name << " is sitting something" << std::endl;
}
void Dog::Run()
{
    std::cout << name << " is running something" << std::endl;
}

std::string Dog::getName(){return name;}
void Dog::setName(std::string name_){name=name_;}

std::string Dog::getBreed(){return breed;}
void Dog::setBreed(std::string breed_){breed=breed_;}

int Dog::getAge(){return age;}
void Dog::setAge(int age_){age=age_;}

std::string Dog::getColor(){return color;}
void Dog::setColor(std::string color_){color=color_;}

