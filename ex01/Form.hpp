#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:

        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
        Form();
    public:
        Form(std::string n , int grade);
        Form(std::string name, int singrade, int exgrade);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();
        std::string getName() ;
        bool getIsSigned();
        int getGradeToSign();
        int GradeToExecute();
};

#endif