#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
        Bureaucrat bureaucrat("ash",2);
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
