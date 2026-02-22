#include "Bureaucrat.hpp"
int main()
{
        try
        {
                std::cout << "--------------------Form 1--------------------" << std::endl;
                {
                        Form form1("Wti9a",10);
                        Bureaucrat bureaucrat("JiM", 9);
                        bureaucrat.signForm(form1); 
                        std::cout << form1 << std::endl;
                }
                std::cout << "--------------------Form 2--------------------" << std::endl;
                Form form2("formName" , 30);
                Bureaucrat bureaucrat("BOB", 70);
                bureaucrat.signForm(form2); 
                std::cout << form2 << std::endl;

        }
        catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }  
}
