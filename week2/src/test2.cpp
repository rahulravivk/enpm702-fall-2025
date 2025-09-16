#include <iomanip>
#include <iostream>
#include <typeinfo>  // needed for typeid
#define SQUARE(x) ((x) * (x))
#define PI 3.14159

// Declare the function (tells compiler it exists)
// void undefined_function();

int main() {
    //==============
    //======== 1
    //==============
    float a{};
    a= 02.7;
    std::cout << int(a) ;
    std::cout << std::setprecision(4) << '\n';
    std::cout << 15555.43628 << '\n';
}