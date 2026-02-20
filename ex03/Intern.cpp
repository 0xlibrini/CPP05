#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

std::string _target;

AForm* CreateShrubberyCreationForm()
{
    std::cout << "is here" << std::endl;
    return  new ShrubberyCreationForm(_target);
}
AForm* CreatePresidentialPardonForm()
{
    return  new PresidentialPardonForm(_target);
}
AForm* CreateRobotomyRequestForm()
{
    return  new RobotomyRequestForm(_target);
}

AForm* Intern::makeForm(std::string form , std::string target)
{
    std::string arr[3];
    arr[0] = "ShrubberyCreationForm";
    arr[1] = "RobotomyRequestForm";
    arr[2] = "PresidentialPardonForm";
    
    AForm* (*ptr[3])() = {
        CreateShrubberyCreationForm,
        CreatePresidentialPardonForm,
        CreateRobotomyRequestForm,
    };
    int i = 0;
    while( i < 3)
    {
        if(arr[i] == form)
        {
            _target = target;
            return (ptr[i])();
        }
        i++;
    }
    return NULL;
}