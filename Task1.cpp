#include <iostream>
#include <string>
int main() {
    int* dynamicInt = new int;
    std::string* dynamicString = new std::string;
    std::cout << "Enter a value for the dynamically allocated integer:";
    std::cin >> *dynamicInt;
    std::cout << "Enter a value for the dynamically allocated string:";
    std::cin.ignore();
    std::getline (std::cin, *dynamicString);

    std::cout << "Value of the dynamically allocated integer:" <<*dynamicInt << std::endl;
std::cout << "Value of the dynamically allocated string:" <<*dynamic << std::endl;

delete dynamicInt;
delete dynamicString;

return 0;

}
