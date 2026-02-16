#include <iostream>

class test
{

    std::string  name;
    int grade;
    public:
        test()
        {
            name = "anas";
            grade = 22;
        }
        std::string   getname()
        {
            return name;
        }
        int getgrade()
        {
            return grade;
        }
};

class test1: public test
{
    public:
};

int main()
{


    test1 a;
    std::cout << a.getname() << std::endl ;  
}