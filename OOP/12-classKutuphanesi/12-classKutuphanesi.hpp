#ifndef NOKTA_H_
#define NOKTA_H_

#include <iostream>
class Nokta
{
    private:
        int x,y;
        
    public:
        int *z;
        const int t;
        Nokta();
        Nokta(int,int,int);
        Nokta(const Nokta&);
        ~Nokta();

        int getX()const; 
        int getY()const;

        void setX(int);
        void setY(int);

        void ekranaYaz();
        bool baslangictaMi();
};

#endif