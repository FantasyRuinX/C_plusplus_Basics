#include <iostream>

namespace Spicy{
    std::string food = "Curry";
}

namespace Sweet{
    std::string food = "Cake";
}

int main(){

    std::string food = "Salad";

    std::cout << food << "\n" << Spicy::food << "\n" << Sweet::food << std::endl;

    return 0;
}