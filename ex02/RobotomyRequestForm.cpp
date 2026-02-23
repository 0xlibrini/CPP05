#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string n) : AForm("Robotomy request form", 72 , 45)
{
    target = n;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form)
{
    this->target = form.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

void  RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
    try
    {
   
        if((!this->getIsSigned()) || bureaucrat.getGrade() > this->getGradeToExecute())
            throw RobotomyRequestForm::GradeTooLowException();
    else
    {
        static int i;
        if( i % 2 == 0)
            std::cout << "CLICK-CLACK! " << target << " has been robotmized" << std::endl;
        else
        {
            std::cout << "CLICK-CLACK! " << target << " the robotomy failed" << std::endl;
            i++;
        }
    }
    }
    catch(RobotomyRequestForm::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}