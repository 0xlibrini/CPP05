#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
        Bureaucrat bureaucrat("ash",137);
        ShrubberyCreationForm a1("home");
        bureaucrat.signAForm(a1);
        a1.execute(bureaucrat);
        std::cout << a1.getIsSigned() << std::endl;

}
