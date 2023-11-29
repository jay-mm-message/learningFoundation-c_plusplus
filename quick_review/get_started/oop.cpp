#include <iostream>
using namespace std;

// Create a class called MyClass
class MyClass {
    private:
        int myNum;
        string myString;
    public:
        void setMyNum(int n);
        void setMyString(string st);
        void myObjShow();
    public:
        // Constructor
        MyClass() {}
        MyClass(int n, string st) {
            myNum = n;
            myString = st;
        }
};

void MyClass::setMyNum(int n) {
    this->myNum = n;
};

void MyClass::setMyString(string st) {
    this->myString = st;
};

void MyClass::myObjShow() {
    cout << "student: " << myNum << ", name: " << myString << endl;
};

class Vehicle {
    public:
        string color;
        string transportationType;
    public:
        // Sea, Land, and Air Transportation
        virtual void showInfo() {
            cout << "color: " << color << endl;
            cout << "transportation type: " << transportationType << endl;
        };
};

class Car: public Vehicle {
    public:
        string brand;
    public:
        void showInfo() override {
            Vehicle::showInfo();
            cout << "brand: " << brand << endl;
        };
};

int main(int argc, char const *argv[])
{
    /* code */
    Car carObj1;
    carObj1.color = "Red";
    carObj1.brand = "Audi";
    carObj1.transportationType = "Land";
    carObj1.showInfo();
    
    MyClass obj1, obj2;
    obj1.setMyNum(1);
    obj1.setMyString("Jay");
    obj1.myObjShow();
    
    obj2.setMyNum(2);
    obj2.setMyString("Ellen");
    obj2.myObjShow();

    MyClass obj3(3, "Jessica");
    obj3.myObjShow();

    //cout << "student: " << obj1.myNum << ", name: " << obj1.myString << endl;
    //cout << "student: " << obj2.myNum << ", name: " << obj2.myString << endl;

    return 0;
}
