#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}


Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
    this->grade = other.grade;
}
Bureaucrat&  Bureaucrat::operator=(const Bureaucrat& other)
{
    
}