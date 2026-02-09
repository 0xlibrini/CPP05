#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  a1("ash", 152); 
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
}
