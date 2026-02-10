#include <iostream>

class test 
{
        std::string name;
    public:
        void hello()
        {
            std::cout <<  "this is hello function"  << std::endl;
        }
};
    std::iostream&  operator<<(std::iostream& out )
    {
        out << "anas librini" << std::endl;
        return out;
    } 

int main()
{
        test obj; 
       std::ostream s;
    //    std::cout  <<  obj;
}