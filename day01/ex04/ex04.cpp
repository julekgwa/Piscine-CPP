#include <iostream>
#include <string>

int main(void) {
    std::string originalString = "HI THIS IS BRAIN";
    std::string *pointerString = &originalString;
    std::string &referenceString = originalString;

    std::cout << "Pointer String : " << *pointerString << std::endl << "Reference String : " << referenceString
              << std::endl;

    return (0);
}