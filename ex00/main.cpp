#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  a1("ash", 150); 
        std::cout << a1;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
