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
                std::string Form = "ShrubberyCreationForm";
                AForm *form = stagaire.makeForm(Form, "world");
                if(!form)
                        throw Form;
                delete form;
        }
        catch(std::string& name)
        {
                std::cout  << "Intern cannot create " << name << std::endl;       
        }

}