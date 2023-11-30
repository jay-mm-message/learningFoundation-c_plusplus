#include <iostream>
using namespace std;


// Have you reached the voting age?
// Access granted - you are old enough.\n
// Access denied - You must be at least 18 years old.\n"

int main(int argc, char const *argv[])
{
    /* code */
    cout << "Have you reach the voting age? ";
    try
    {
        /* code */
        int age;
        cin >> age;
        if (age >= 18) {
            cout << "Access granted - You are old enough.\n";
        } else {
            throw (age);
        }
    }
    catch(int age)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age are: " << age << endl;
    }
    
    return 0;
}
