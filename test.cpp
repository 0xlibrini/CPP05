#include <iostream>
using namespace std;

class test
{
    public:
    class error
    {
        public:
        error()
        {
            std::cout << "is here" << std::endl;
        }
        error(const error&)
        {
            std::cout << "copy is called " << std::endl;
        }
        void hello()
        {
            std::cout << "Error happen " << std::endl;
        }
    };
};
// void    func(test)
// {
// 
//}
int main()
{
   test::error test1;
    test::error test2 = test1;
}
