#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  bureacrat("Bob", 1); 
        std::cout << bureacrat << std::endl;
        bureacrat.decrementGrade();
        bureacrat.incrementGrade();
        bureacrat.incrementGrade();
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
