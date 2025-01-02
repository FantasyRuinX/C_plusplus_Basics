#include <iostream>
#include <sstream>
#include <string>
#include <format>

using std::cout;
using std::cin;
using std::string;
using std::istringstream;

string name,formula;
string formulaSplit[3];


void subString(){
    string temp;
    int index = 0;

    istringstream stream(formula);

    while (getline(stream, temp, ' ')) {
        formulaSplit[index++] = temp;
    }

}

void calFormula(){
    string temp;
    int index = 0;

    int num0 = 0,num1 = 0;
    int array_size = sizeof(formulaSplit) / sizeof(formulaSplit[0]);

    getline(cin,formula);
    subString();

    for (int i = 0; i <= array_size; i++) {
        string temp = formulaSplit[i];
        bool isNum = isdigit(temp[0]);

        if (isNum && num0 == 0){
            num0 = stoi(temp);
        }else if (isNum && num1 == 0){
            num1 = stoi(temp);
        }
    }

    if (formulaSplit[1] == "+"){ cout << num0 << " + " << num1 << " = " << (num0 + num1) << endl;}
    else if (formulaSplit[1] == "-"){ cout << num0 << " - " << num1 << " = " << (num0 - num1) << endl;}
    else if (formulaSplit[1] == "*"){ cout << num0 << " * " << num1 << " = " << (num0 * num1) << endl;}
    else if (formulaSplit[1] == "/"){ cout << num0 << " / " << num1 << " = " << (num0 / num1) << endl;}

}

int main()
{
    cout << "Enter your name : ";
    getline(cin,name);

    cout << "Hello " + name + "\n";

    cout << "Enter a +,-,*,/ formula.\nExample 1 + 1\nEnter your formula : ";
    calFormula();

    return 0;
}