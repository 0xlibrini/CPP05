#include "Form.hpp"
Form::Form(std::string n, int grade) : name(n), gradeToSign(grade)
{
    isSigned = false;
}
Form::Form(const Form& other) : name(other.name) , isSigned(other.isSigned) , gradeToSign(other.gradeToSign) , gradeToExecute(other.gradeToExecute)
{

}
