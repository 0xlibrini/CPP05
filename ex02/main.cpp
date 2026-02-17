#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
        try
        {
                Bureaucrat bureaucrat("ash",73);
        // ShrubberyCreationForm a1("home");
        // bureaucrat.signAForm(a1);
        // a1.execute(bureaucrat);
        // std::cout << a1.getIsSigned() << std::endl;
        
        RobotomyRequestForm a2("anas");
        bureaucrat.signAForm(a2);
        bureaucrat.executeForm(a2);
        bureaucrat.executeForm(a2);
        ft_success(bureaucrat, a2);
        }
        catch(std::exception& e)
        {
                std::cout << "insufficient grade to perform this operation" << std::endl;
                std::cout << e.what() << std::endl;
        }
}
