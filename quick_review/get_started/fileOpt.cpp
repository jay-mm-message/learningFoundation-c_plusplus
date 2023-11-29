#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ofstream MyFile("fileName.txt");

    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        MyFile << i << ": Files can be tricky, but it is fun enough!\n";
    }

    MyFile.close();

    ifstream MyReadFile("fileName.txt");

    string myText;
    while(getline(MyReadFile, myText)) {
        cout << myText << endl;
    }
    cout << endl;
    return 0;
}
