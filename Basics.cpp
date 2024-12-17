#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string name;

void getName(){
    getline(cin,name);
}

void calFormula(){
    string formula,temp,split;
    int index = 0;
    string formulaSplit[100];

    getline(cin,formula);

    istringstream stream(formula);

    while (getline(stream, temp, ' ')) {
        formulaSplit[index++] = temp;
    }

    for (int i = 0; i < index; i++) {
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