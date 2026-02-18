#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string n) : AForm("PresidnetalPardonForm", 25, 5 )
{
    target = n;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}   

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :AForm(other)
{
    this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const 
{
    if((!this->getIsSigned())  ||  bureaucrat.getGrade() > this->getGradeToExecute())
        throw PresidentialPardonForm::GradeTooLowException();
    else
        std::cout << target  << " has been pardoned by Zaphod Beeblerox" << std::endl;
}   