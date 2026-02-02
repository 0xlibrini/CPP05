#include <iostream>



class  test
{
    public:
        virtual void makesound()
        {
            std::cout << "is done" << std::endl;
        }
};

class test00: public test
{
    void makesound()
    {
        std::cout << "the new fun is done" << std::endl;
    }
    public:
        std::string name = "anas";

};

int main()
{
    int i  = 0;
    try
    {
        if( i == 2)
            throw std::bad_alloc();
        if(!i)
            throw 10;

    }
    catch(std::bad_alloc &e)
    {   
        std::cout << "id here with alloc error" << std::endl;
        std::cout << "is here " << e.what() << std::endl;
    }
    catch(int e)
    {
        std::cout  <<  "is here with int error" << std::endl;
    }
}