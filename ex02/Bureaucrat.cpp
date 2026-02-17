#include "Bureaucrat.hpp"
#include "AForm.hpp"

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


int  Bureaucrat::getGrade() const
{
    return grade;
}

std::string Bureaucrat::getName() const
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

std::ostream& operator<<(std::ostream& out,const Bureaucrat& obj)
{
    out <<  obj.getName() <<", bureaucrat grade " << obj.getGrade();
    return out;
}

void    Bureaucrat::executeForm(const AForm& form)
{
    form.execute(*this);
}

void ft_success(const Bureaucrat& bureaucrat , const AForm& form)
{
    std::cout <<  bureaucrat.getName() <<", bureaucrat grade " << bureaucrat.getGrade() << " executed " << form.getName() << std::endl;
}

void Bureaucrat::signAForm(AForm& Form)
{
    Form.beSigned(*this);
}