#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class  Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        std::string getName();
        void    getGrade();
        void increment();
        void decrement();
};
#endif
