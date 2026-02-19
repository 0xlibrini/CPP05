#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

AForm* CreateShrubberyCreationForm()
{
    return  new ShrubberyCreationForm("Shurbbery");
}
AForm* CreatePresidentialPardonForm()
{
    return  new PresidentialPardonForm("President");
}
AForm* CreateRobotomyRequestForm()
{
    return  new RobotomyRequestForm("ROBOTO");
}

AForm* Intern::makeForm(std::string form , std::string target)
{
    std::string arr[3];
    arr[0] = "ShrubberyCreationForm";
    arr[1] = "RobotomyRequestForm";
    arr[2] = "PresidentialPardonForm";
    
    AForm* (*ptr[3])() = {
        CreateShrubberyCreationForm,

    };

     int i = 0;
    while( i < 3)
    {
        if(arr[i] == form)
            (ptr[0])();
        i++;
    }
    return NULL;
}