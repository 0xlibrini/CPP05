#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

AForm* create()
{
    return  new PresidentialPardonForm("President");
}

AForm* Intern::makeForm(std::string form , std::string target)
{
    std::string arr[3];
    arr[0] = "ShrubberyCreationForm";
    arr[1] = "RobotomyRequestForm";
    arr[2] = "PresidentialPardonForm";
    
    // AForm *ptr[3] = 
     int i = 0;
    while( i < 3)
    {
        if(arr[i] == form)
            i++;
    }
    return NULL;
}