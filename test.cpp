#include <iostream>

class test 
{
    
    char  num;
    
    public:
     const std::string name;
        test() : name("anas")
        { 

        }

        std::string getname() const
        {
            return name;
        }
        void hello(const test& other)
        {
            std::cout << other.getname() << std::endl;
        }
};


int main()
{

    test a1;
    a1.hello(a1);
    //    std::cout  <<  obj;
}