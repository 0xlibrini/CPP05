#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string n) : AForm("PresidnetalPardonForm", 25, 5 )
{
    target = n;
}


void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const 
{
    if((!this->getIsSigned())  ||  bureaucrat.getGrade() > this->getGradeToExecute())
            throw PresidentialPardonForm::GradeTooLowException();
    else
        std::cout << target  << " has been pardoned by Zaphod Beeblerox" << std::endl;
}   