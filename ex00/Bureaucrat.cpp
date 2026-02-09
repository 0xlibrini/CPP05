#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string n, int num) : name(n)
{
    if (num < 1)
        throw Bureaucrat::GradeTooHighException();
    else if( num > 150 )
        throw Bureaucrat::GradeTooLowException();
    grade = num;
}

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
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if( grade < 150 )
        grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

const  char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return  "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return  "Grade too Low";
}