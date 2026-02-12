#include <iostream>

class test 
{
    
    char  num;
    
    public:
        std::string name;
        test() : name("anas")
        { 

        }
        test(std::string n)
        {
            name = n;
        }

};


int main()
{

    test a1 = a1("anas");

    //    std::cout  <<  obj;
}