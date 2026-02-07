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


// class test
// {
//     private:

//     public:
//         const    std::string name;
//         int  *ptr;
//         int age;
//         test()
//         {

//             ptr = new int(age);
            
//         }
//         test( const test& other)
//         {
//             ptr = new int(other.age);
//         }
//         ~test()
//         {
//             delete ptr;
//         }
//         // test(std::string str, int a) : name(str)
//         // {

//         //     age = a;
//         // }
// };

// int main()
// {
//     test a1 ; 
//     a1.age = 10;
//     test a2(a1);
//     std::cout << a1.age << std::endl;
// }

class  test
{
    public:
        int a;
    test()
    {
        //a = 10;
    }
    test(const test& other)
    {
        //this->a  = other.a;
        std::cout << "is here" << std::endl;
    }
    test operator=( const test &other)
    {
        this->a = other.a;
        return *this; 
    }
};

int main()
{
    test a;
    //a.a = 10;
    test b;
    test c;
    c.a = 10;
    a = b = c;
    std::cout << "the fisrt " << b.a << "   " <<  a.a << std::endl;
}