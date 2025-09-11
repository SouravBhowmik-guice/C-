#include<iostream>
using namespace std;

int main(){
    /*
    string food="Pizza";// variable declaration
    string* ptr = &food;// pointer declaration

    // Output the value of food (Pizza)
    cout<< food<< "\n";
    // Output the memory address of food (0x6dfed4)
    cout<< &food<< "\n";
    //Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout<< ptr<<"\n";
    // Dereference: Output the value of food with the pointer (Pizza)
    cout<<*ptr<<"\n";

    */

    string food1 = "Pizza";
string* ptr = &food1;

// Output the value of food1 (Pizza)
cout << food1 << "\n";

// Output the memory address of food1 (0x6dfed4)
cout << &food1 << "\n";

// Access the memory address of food1 and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food1 variable (Hamburger)
cout << food1 << "\n";

    return 0;

}