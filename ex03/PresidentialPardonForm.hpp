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
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm&  operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        void execute(const Bureaucrat& bureaucrat) const ;
};

#endif