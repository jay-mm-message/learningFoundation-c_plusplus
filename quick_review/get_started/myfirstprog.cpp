#include <iostream>
using namespace std;

int main() {
    // This is a comment
    cout << "My first c plus plus program. \n";

    /* The code below will print words Learning c plus plus
    to the screen, and it is amazing */
    cout << "Learning c plus plus.";

    cout << endl;
    /* Create a variable called myNum of type int and assign
     it the value 15 */
    int myNum = 15;
    cout << myNum << endl;

    /* To declare more than one variable of the same type,
    use a comma-separed list */
    int x = 1, y = 2, z = 3;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    /* Can also assign the same value to multiple variables
    in one line */
    x = y = z = 50;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    cout << endl;
    return 0;
}