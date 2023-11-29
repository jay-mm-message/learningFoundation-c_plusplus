#include <iostream>
using namespace std;

// Function declaration
void myFunction(string name = "bystander");
int max(int a, int b);
void swapNums(int &a, int &b); // called by reference
void show_array(int arr[], int size);

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
    
    cout << "a: " << a << ", b: " << b << endl;
    cout << "call swap(" << a << ", " << b << ")" << endl;
    swapNums(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    int arrNums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    show_array(arrNums, sizeof(arrNums)/sizeof(int));

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

void swapNums(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void show_array(int arr[], int size) {

    for (size_t i = 0; i < size; i++) {
        /* code */
        cout << arr[i] << ' ';
    }
    cout << endl;
}