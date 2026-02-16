#include <iostream>

class test
{
    public:
        void  hello()
        {
            std::cout << "Hello World" <<  std::endl;
        }
        virtual void makesound() = 0;
    
};

class test1: public test
{
    public:
        void makesound()
        {
            std::cout << "mow" << std::endl;
        }
};

int main()
{


    test1 a;

    a.hello();
    
}