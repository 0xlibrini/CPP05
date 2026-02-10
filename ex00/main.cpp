#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  a1("Bob", 75); 
        a1.incrementGrade();
        a1.decrementGrade();
        a1.decrementGrade();
        std::cout << a1;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
