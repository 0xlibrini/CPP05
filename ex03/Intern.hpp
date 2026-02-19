#ifndef INTERN_HPP
#define INTERN_HPP

#include  "AForm.hpp"

class  PresidentialPardonForm;

class Intern
{
    public:
        AForm* makeForm(std::string name, std::string target);
};
    
void    create1();
void    create2();
#endif