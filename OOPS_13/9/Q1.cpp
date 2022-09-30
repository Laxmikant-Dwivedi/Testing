#include <iostream>
 
class A {
    int i;
    public:
        A(int j = 0) : i(j)
        {
            std::cout << "A::A" << i << "() constructor "
                      << std::endl;
        }
        ~A()
        {
            std::cout << "A::~A" << i << "() destructor "
                      << std::endl;
        }
};
 
A a1(1);
 
int main()
{
    A a2(2);
}