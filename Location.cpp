//FIND THE LOCATION TO SOLVE THIS RIDDLE
#include <iostream>
#include <string>

std::string generateOutput() {
    std::string output;
    
    output += "H";
    output += std::to_string(2);
    output += "W";
    output += std::to_string(9);
    output += "+";
    output += std::to_string(2 * 13);
    output += "F";
    
    return output;
}

int main() {
    std::string result = generateOutput();
    std::cout << result << std::endl;
    
    return 0;
}

