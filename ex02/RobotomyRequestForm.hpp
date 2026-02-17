#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string n);
        RobotomyRequestForm(const RobotomyRequestForm& form);
        ~RobotomyRequestForm();
        void execute(const Bureaucrat& bureaucrat) const; 
};
#endif