#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
        try
        {
                Bureaucrat bureaucrat("BoB",100);
                std::cout << "-----------Form 1 (Shrubbery) -------------" << std::endl;
                ShrubberyCreationForm form("home");
                bureaucrat.signAForm(form);
                bureaucrat.executeForm(form);
                ft_success(bureaucrat, form);
                std::cout << std::endl;

                std::cout << "-----------Form 2 (Robot) -------------" << std::endl;
                RobotomyRequestForm form1("Robotomy");
                bureaucrat.signAForm(form1);
                bureaucrat.executeForm(form1);
                bureaucrat.executeForm(form1);
                bureaucrat.executeForm(form1);
                bureaucrat.executeForm(form1);
                if(form1.getIsSigned())
                        ft_success(bureaucrat, form1);
                else
                        ft_failure(bureaucrat, form1);
                std::cout << std::endl;

                std::cout << "-----------Form 2 (President) -------------" << std::endl;
                PresidentialPardonForm form2("President");
                bureaucrat.signAForm(form2);
                bureaucrat.executeForm(form2);
                ft_success(bureaucrat, form2);
        }
        catch(std::exception& e)
        {
                std::cout << e.what() << std::endl;
                std::cout << "insufficient grade to perform this operation" << std::endl;
        }
}
