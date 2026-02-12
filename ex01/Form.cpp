#include "Form.hpp"

Form::Form(std::string n, int grade) : name(n), gradeToSign(grade),
gradeToExecute(0)
{
    isSigned = false;
}
Form::Form(const Form& other) : name(other.name) , isSigned(other.isSigned) 
, gradeToSign(other.gradeToSign) , gradeToExecute(other.gradeToExecute)
{

}
Form::Form(std::string n, int singrade, int exgrade) : name(n) 
, gradeToSign(singrade) , gradeToExecute(exgrade)
{

}
Form&    Form::operator=(const Form& other)
{
    this->isSigned = other.isSigned ;
    return *this;
}

std::string  Form::getName() 
{
    return name;
}
