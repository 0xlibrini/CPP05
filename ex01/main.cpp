#include "Bureaucrat.hpp"
int main()
{
        Form a1("wti9a",50);
        Bureaucrat ww("ash", 30);
        ww.signForm(a1); 
        std::cout << a1.getIsSigned();      
}
