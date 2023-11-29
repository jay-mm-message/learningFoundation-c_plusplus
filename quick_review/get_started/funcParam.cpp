#include <iostream>
using namespace std;

// Function declaration
void myFunction(string name = "bystander");
int max(int a, int b);

int main(int argc, char const *argv[])
{
    /* code */
    myFunction("Joe");
    myFunction("Ellen");
    myFunction("Jhon");
    myFunction();

    int a = 300;
    int b = 200;
    cout << "(" << a << ", " << b << "), max is " << max(a, b) << endl;
    
    cout << endl;
    return 0;
}

// Function definition
void myFunction(string name) {
    cout << "Hi, " << name << endl;
}

int max(int a, int b) {
    return (a<b)?b:a;
}
