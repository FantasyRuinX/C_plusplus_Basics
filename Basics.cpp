#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string name,formula;
string formulaSplit[100];

void getName(){
    getline(cin,name);
}

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

    getline(cin,formula);

    subString();

    for (int i = 0; i <= formulaSplit->length() + 1; i++) {
        cout << formulaSplit[i] << endl;
    }

}

int main()
{
    cout << "Enter your name : ";
    getName();

    cout << "Hello " + name + "\n";

    cout << "Enter a +,-,*,/ formula.\nExample 1 + 1\nEnter your formula : ";
    calFormula();
    return 0;
}