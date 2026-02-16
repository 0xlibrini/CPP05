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
        ShrubberyCreationForm(std::string n): AForm("Shurbbery", 145, 137)
        {
            target = n + "_shurberry";
        }
        void execute(const Bureaucrat& bureaucrat) const;
};

#endif