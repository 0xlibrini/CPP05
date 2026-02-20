#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
        // try
        // {
                Bureaucrat bureaucrat("BoB",2);
        //         ShrubberyCreationForm form("home");
        //         bureaucrat.signAForm(form);
        //         bureaucrat.executeForm(form);
        //         ft_success(bureaucrat, form);

        //         RobotomyRequestForm form1("BZZZZT");
        //         bureaucrat.signAForm(form1);
        //         bureaucrat.executeForm(form1);
        //         bureaucrat.executeForm(form1);
        //         bureaucrat.executeForm(form1);
        //         bureaucrat.executeForm(form1);
        //         ft_success(bureaucrat, form1);

        //         PresidentialPardonForm form2("President");
        //         bureaucrat.signAForm(form2);
        //         bureaucrat.executeForm(form2);
        //         ft_success(bureaucrat, form2);
        // }
        // catch(std::exception& e)
        // {
        //         std::cout << e.what() << std::endl;
        //         std::cout << "insufficient grade to perform this operation" << std::endl;
        // }
        try
        {
                try
                {
                        Intern stagaire;
                        AForm *test = stagaire.makeForm("Form", "world");
                        if(!test)
                                throw 5;
                        bureaucrat.signAForm(*test);
                        test->execute(bureaucrat);
                }
                catch(...)
                {
                        std::cout << "is done" << std::endl;
                        throw;
                }
        }
        catch(int e)
        {
                std::cout << e << std::endl;
        }
        // test->t
}
