#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}


Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
    this->grade = other.grade;   
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if(this != &other)
        this->grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}


int  Bureaucrat::getGrade()
{
    return grade;
}

std::string Bureaucrat::getName()
{
    return name;
}

void    Bureaucrat::incrementGrade()
{
    if( grade  > 1)
        grade--;
}

void Bureaucrat::decrementGrade()
{
    if( grade < 150 )
        grade++;
}