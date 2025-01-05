#include <iostream>

void fibSeq(int num){

    int num0 = 0;
    int num1 = 1;
    int sum = 0;

    for (int i = 0; i < num; i++){
        std::cout << sum << " | ";
        num0 = num1;
        num1 = sum;
        sum = num0 + num1;
    }

    std::cout << std::endl;

}

int main(){

    fibSeq(4);
    
    fibSeq(8);

    return 0;
}