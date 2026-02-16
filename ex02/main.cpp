#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
        AForm a1("wti9a",50);
        Bureaucrat ww("ash", 30);
        ww.signAForm(a1); 
        std::cout << a1.getIsSigned();      
}
