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
};

int main()
{
        int x = 10; 
        int y = 0;
        // try
        // {
        //     if( y == 0)
        //         throw  test00();
        //     std::cout << x / y << std::endl;   
        // }

        catch (...)
        {
            
            //std::cout << name << std::endl;
        }
        std::cout << "the programm is countinue" << std::endl;
}