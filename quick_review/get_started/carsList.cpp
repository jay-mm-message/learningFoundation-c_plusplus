#include <iostream>
using namespace std;

struct carsList
{
    /* data */
    string brand;
    string model;
    unsigned int year;
};

int main(int argc, char const *argv[])
{
    /* code */
    carsList cars1;
    cars1.brand = "BMW";
    cars1.model = "X5";
    cars1.year = 1999;

    carsList cars2;
    cars2.brand = "Ford";
    cars2.model = "Mustang";
    cars2.year = 1969;

    cout << "cars1.brand: " << cars1.brand << endl;
    cout << "cars1.model: " << cars1.model << endl;
    cout << "card2.year: " << cars1.year << endl;

    cout << "cars2.brand: " << cars2.brand << endl;
    cout << "cars2.model: " << cars2.model << endl;
    cout << "cars2.year: " << cars2.year << endl;
    
    return 0;
}
