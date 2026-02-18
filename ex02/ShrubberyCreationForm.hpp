#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
        ShrubberyCreationForm();

    public:

        ShrubberyCreationForm(std::string n);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat& bureaucrat) const;
};

#endif