#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form(std::string n, int grade) : name(n), gradeToSign(grade),
gradeToExecute(0)
{
    isSigned = false;
    if( gradeToSign > 150 )
        throw Form::GradeTooLowException();
    if( gradeToSign <= 0 )
        throw Form::GradeTooHighException();
}
Form::Form(const Form& other) : name(other.name) , isSigned(other.isSigned) 
, gradeToSign(other.gradeToSign) , gradeToExecute(other.gradeToExecute)
{

}
Form&    Form::operator=(const Form& other)
{
    this->isSigned = other.isSigned;
    return *this;
}

Form::~Form()
{

}
std::string  Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

const char * Form::GradeTooHighException::what() throw()
{
    return "Grade Too high";
}

const char* Form::GradeTooLowException::what() throw()
{
    return "Grade Too Low";
}

void    Form::beSigned(const Bureaucrat& other) 
{
    if(other.getGrade() > gradeToSign)
        throw Form::GradeTooLowException();
    isSigned = true;
}

std::ostream&  operator<<(std::ostream& out, const Form& form)
{
    out << form.getName() << " signed yes" << "gradeTosign " << form.getGradeToSign();
    return out;
}

