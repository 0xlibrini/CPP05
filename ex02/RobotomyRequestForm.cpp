#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string n) : AForm("Robotomy request form", 72 , 25)
{
    target = n;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form)
{
    this->target = form.target;
}

void  RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
    if((!this->getIsSigned()) || bureaucrat.getGrade() > this->getGradeToExecute())
    {
        throw RobotomyRequestForm::GradeTooLowException();
    }
    else
    {
        static int i;
        if( i % 2 == 0)
            std::cout << target << " has been robotmized" << std::endl;
        else
            std::cout << target << " the robotomy failed" << std::endl;
        i++;
    }
}