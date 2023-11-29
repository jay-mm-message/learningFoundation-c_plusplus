#include <iostream>
using namespace std;

// Function declaration
void myFunction(string name);

int main(int argc, char const *argv[])
{
    /* code */
    myFunction("Joe");
    myFunction("Ellen");
    myFunction("Jhon");
    
    cout << endl;
    return 0;
}

// Function definition
void myFunction(string name) {
    cout << "Hi, " << name << endl;
}
