#include <iostream>
//#include <exception>

class GradeTooLowException : private std::exception
{
    public:
        virtual const char *what() const throw()
        {
                return ("Form:Grade is too low");
        }
};

class GradeTooHighException : protected std::exception
{
    public:
        virtual const char *what() const throw()
        {
                return ("Form:Grade is too high");
        }
};


int main()
{
    try
    {
        //throw GradeTooLowException();
        throw GradeTooHighException();
    }
    catch(GradeTooLowException &s)
    {
        std::cout << s.what() << std::endl;
    }
    catch(GradeTooHighException &t)
    {
        std::cout << t.what() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}