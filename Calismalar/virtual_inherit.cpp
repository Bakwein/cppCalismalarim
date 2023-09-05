
#include <iostream>
#include <string>

class mainclass
{
    public:
        std::string name;
        
        virtual void deneme(void)
        {
            std::cout << "ana fonksiyon" << std::endl;
        }
        ~mainclass(void)
        {
            std::cout << "main dest." << std::endl;
        }    
};  

class childclass : public mainclass
{
    public:
        void deneme(void)
        {
            std::cout << "child func." << std::endl;
        }
        ~childclass(void)
        {
            std::cout << "child dest. " << std::endl;
        }
};  

int main()
{

    mainclass m1;
    childclass c1;

    m1.deneme();
    c1.deneme();
    std::cout << "---------" << std::endl;

    /*
    ana fonksiyon
    child func.
    ---------
    child dest. 
    main dest.
    main dest.
    */
}