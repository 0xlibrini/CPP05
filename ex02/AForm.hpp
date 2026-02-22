#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
    private:

        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
        AForm();
        
        public:
        
        AForm(std::string n , int gradeSING , int gradeEXEC);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();
        std::string getName() const ;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned( const Bureaucrat& other);
        virtual void execute( Bureaucrat const & executor) const = 0 ;
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };

    class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();

        };
};

std::ostream&  operator<<(std::ostream& out, const AForm& other);
#endif
