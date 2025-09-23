#include <iomanip>
#include <iostream>
#include <typeinfo>  // needed for typeid
#define SQUARE(x) ((x) * (x))
#define PI 3.14159

namespace MyNamespace1 {
int x{3};
int y{4};
} // end namespace MyNamespace1

namespace MyNamespace2 {
int x{33};
int y{84};
} // end namespace MyNamespace2
 

// Declare the function (tells compiler it exists)
// void undefined_function();

int main() {
    //==============
    //======== 1
    //==============
    /*float a{};
    a= 02.7;
    std::cout << int(a) ;
    std::cout << std::setprecision(4) << '\n';
    std::cout << 15555.43628 << '\n';
   
    int a {};
    std::cout << "Enter the integer is :";
    std::cin >> a ;
    std::cout << "The integer is :" << a << '\n';

    int b {};
    std::cout << "Enter the integer is :";
    std::cin >> b ;
    std::cout << "The integer is :" << b << '\n';

    if (a<=10)
    std::cout << "the number a is less than or equal to 10" << '\n';
    else
    std::cout << "the number a is greater than 10" << '\n';
    int c{1};
    std::cout << ((a>b)?a:b) << '\n';
    std::cout << "The larger integer is :" << c << '\n';

    int x{-10};
    int y{-10};
    if (x>0)
        if (y>0)
         std::cout << "x and y are positive " << '\n';
    else
    std::cout << "x is negative" << '\n';
     
    std::string name;
    std::cout << "Enter the name :";
    std::cin >> name ;
    std::cout << "The entry is :" << name << '\n';
    

    int selection{};
do {
std::cout << "Which approach do you want to use (1 or 2)?:\n";
std::cout << "1) Breadth-first search\n";
std::cout << "2) Depth-first search\n";
std::cout << "Please select an approach: ";
std::cin >> selection;
} while (selection != 1 && selection != 2);

switch (selection) {
case 1:
std::cout << "You selected: Breadth-first\n";
break;
case 2:
std::cout << "You selected: Depth-first search\n";
break;
}

int b{};
for (auto i{0}; i < 10 ;)
{
    
   b=++i;
std::cout << b;
}


auto a{1.33};
auto b{33};
std::cout << a << '\n';
std::cout << b << '\n';

int x{10};
std::cout << x << '\n';
// Output?
{
int y{20};
int x{30};
std::cout << x << '\n'; // Output?
std::cout << y << '\n'; // Output?
}
std::cout << x << '\n';
//std::cout << y << '\n';
// Output?
// Output?

//std::cout << MyNamespace1::x << '\n';
//std::cout << MyNamespace2::x << '\n';
using namespace MyNamespace1;
//std::cout << x << '\n';
using namespace MyNamespace2;
std::cout << x << '\n';
//std::cout << MyNamespace2::x << '\n';
*/
}