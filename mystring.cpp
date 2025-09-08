#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "ADI";
    string str1 = "Harry";
    string mystring = "Hello";
    cout << mystring[mystring.length() - 4] << endl; 
    //prints from rhs to lhs starting from 0 index

    cout << "Length of str: " << str.length() << endl;
    cout << "Length of str1: " << str1.size() << endl;

    return 0;
}