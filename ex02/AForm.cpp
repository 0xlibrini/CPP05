
#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(std::string n, int gradeSING , int gradeEXEC) : name(n), gradeToSign(gradeSING),
gradeToExecute(gradeEXEC)
{
    isSigned = false;
    if( gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    if( gradeToSign <= 0  || gradeToExecute <= 0)
        throw AForm::GradeTooHighException();
}
AForm::AForm(const AForm& other) : name(other.name) , isSigned(other.isSigned) 
, gradeToSign(other.gradeToSign) , gradeToExecute(other.gradeToExecute)
{

}
AForm&    AForm::operator=(const AForm& other)
{
    this->isSigned = other.isSigned;
    return *this;
}

AForm::~AForm()
{

}
std::string  AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

const char * AForm::GradeTooHighException::what() throw()
{
    return "Grade Too high";
}

const char* AForm::GradeTooLowException::what() throw()
{
    return "Grade Too Low";
}

void    AForm::beSigned(const Bureaucrat& other) 
{
    if(other.getGrade() > gradeToSign)
        throw AForm::GradeTooLowException();
    isSigned = true;
}

std::ostream&  operator<<(std::ostream& out, const AForm& AForm)
{
    out << AForm.getName() << " signed yes" << "gradeTosign " << AForm.getGradeToSign();
    return out;
}

