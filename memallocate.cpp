#include<iostream>
using namespace std;

int main(){
   
int number {22};// stack
int * p_number = &number;

cout << endl;
cout << "Declaring pointer and assigning address : " << endl;
cout << "number : " << number << endl;
cout << "p_number : " << p_number << endl;
cout << "&number : " << &number << endl;
cout << "*p_number : " << *p_number << endl;

int * p_number1; // Uninitialized pointer, contains junk address
int number1 {12};
p_number1 = &number1; // Make it point to a valid address
cout << endl;
cout << "Unintialized pointer : " << endl;
cout << "*p_number1 : " << *p_number1 << endl;


//Dynamic heap memory
int *p_number4{nullptr};
p_number4 = new int;





    return 0;
}