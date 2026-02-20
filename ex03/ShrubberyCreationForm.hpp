#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
    ShrubberyCreationForm();
    
    public:
    
        std::string target;
        ShrubberyCreationForm(std::string n);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat& bureaucrat) const;
};

#endif