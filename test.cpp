#include <iostream>
using namespace std;

// class test
// {
//     public:
//     class error
//     {
//         public:
//         error()
//         {
//             std::cout << "is here" << std::endl;
//         }
//         error(const error&)
//         {
//             std::cout << "copy is called " << std::endl;
//         }
//         void hello()
//         {
//             std::cout << "Error happen " << std::endl;
//         }
//     };
// };
// void    func(test)
// {
// 
//}


class test
{
    private:    
    public:
    const    std::string name;
    test *ptr;
    int age;

        test(std::string str, int a) : name(str)
        {
            ptr = new test();
            age = a;
        }
        test(const test& other) : name (other.name)
        {
           ptr = other.ptr;
        }
};

int main()
{
    test a1("librini ", 21) ; 
    test a2 = a1;
}