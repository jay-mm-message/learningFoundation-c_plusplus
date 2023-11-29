#include <iostream>
using namespace std;

// Create a class called MyClass
class MyClass {
    public:
        int myNum;
        string myString;
    public:
        void myObjShow() {
            cout << "student: " << myNum << ", name: " << myString << endl;
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    MyClass obj1, obj2;
    obj1.myNum = 1;
    obj1.myString = "Jay";
    obj1.myObjShow();
    
    obj2.myNum = 2;
    obj2.myString = "Ellen";
    obj2.myObjShow();

    //cout << "student: " << obj1.myNum << ", name: " << obj1.myString << endl;
    //cout << "student: " << obj2.myNum << ", name: " << obj2.myString << endl;

    return 0;
}
