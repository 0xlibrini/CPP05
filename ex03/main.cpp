#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
        try
        {
                Intern stagaire;
                std::string Form = "RobotomyRequestForm";
                AForm* form = stagaire.makeForm(Form , "President");
                if(!form)
                        throw Form;
                delete form;      
        }
        catch(std::string name)
        { 
                std::cout  << "Intern cannot create " << name << std::endl;       
        }
        try
        {
                Bureaucrat bureaucrat("BoB",2);
                std::cout << "-----------Form 1 (Shrubbery) -------------" << std::endl;
                ShrubberyCreationForm form("home");
                bureaucrat.signAForm(form);
                bureaucrat.executeForm(form);
                if(form.getIsSigned())
                        ft_success(bureaucrat, form);
                else
                        ft_failure(bureaucrat,form);
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
                if(form1.getIsSigned())
                        ft_success(bureaucrat, form1);
                else
                        ft_failure(bureaucrat, form1);
        }
        catch(std::exception& e)
        {
                std::cout << e.what() << std::endl;
        }
}
