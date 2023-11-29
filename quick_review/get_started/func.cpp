#include <iostream>
using namespace std;

// Function declaration
void myFunction ();

int main(int argc, char const *argv[])
{
    /* code */
    // called function
    myFunction();
    return 0;
}

// Function definition
void myFunction() {
    cout << "I just do executed!" << endl;
}
