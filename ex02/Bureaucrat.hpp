#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class AForm;


class  Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int num);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat&    operator=(const Bureaucrat& other);
        ~Bureaucrat();
        std::string getName() const;
        int    getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signAForm(AForm& AForm);
        void executeForm(AForm const & form);
        class  GradeTooHighException : public std::exception
        {
            public:
            const char * what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
            const char* what() const throw();
            
        };
    };
    
    std::ostream& operator<<(std::ostream &out , const Bureaucrat& obj);
    void ft_success(const Bureaucrat& bureaucrat , const AForm& form );
    void ft_failure(const  Bureaucrat& bureaucrat, const  AForm form1);
    #endif
