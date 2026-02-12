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
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();
        std::string getName() const ;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

    class GradeTooHighException : public std::exception
        {
            public:
                const char *what() throw();
        };

    class GradeTooLowException : public std::exception
        {
            public:
                const char *what() throw();

        };
};

#endif