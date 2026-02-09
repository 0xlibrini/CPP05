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


class test
{
    protected:
        std::string name;
    // public:
    //      virtual  void hello()
    //      {
    //          std::cout << "hello world " << std::endl;
    //      }
};

class test1 : public test 
{
    private:
        void here()
        {
            name = "anas";
        }
        void  hello()
        {
            std::cout << "happen here " << std::endl;
        }   
};

int main()

{
    test1 obj3;
    test &obj = obj3;
   obj.hello();
}
