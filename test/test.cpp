#include <iostream>


class    test
{
    private:
        int x;
        char m;
};

class test2: public test
{
    
};


int main()
{
    test x;
    
    test2 *z = &x;

}