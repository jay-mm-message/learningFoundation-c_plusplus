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

    /* note: variable 'xx' declared const here
    const int xx = 100;
    ~~~~~~~~~~^~~~~~~~ 1 error generated.*/
    const int xx = 100;
    // xx = 50;

    cout << "xx = " << xx << endl;

    int xxx;
    cout << "Type a number: ";
    cin >> xxx;
    cout << "xxx = " << xxx << endl;

    string greeting = "Hello";
    cout << "greeting: " << greeting << endl;

    /* Concatenate strings with the append() function */
    string fullName = "";
    string firstName = "Joe";
    string lastName = "Doe";

    fullName.append(firstName).append(" ").append(lastName);

    cout << "fullName: " << fullName << endl;

    /* use the length() */
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "txt length is " << txt.length() << endl;

    /* use the size() */
    cout << "txt size is " << txt.size() << endl;

    /* prints first charactor in txt by referring to its index
    number inside square brackets */
    cout << "txt[0] is " << txt[0] << endl;


    cout << endl;
    return 0;
}