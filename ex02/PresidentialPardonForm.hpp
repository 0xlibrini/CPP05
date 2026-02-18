#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(std::string n);
        void execute(const Bureaucrat& bureaucrat) const ;
};

#endif