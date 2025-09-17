#include<iostream>
using namespace std;

int main(){

    int myint;
    /*
    float myfloat;
    double mydouble;
    char mychar;
    */

    cout << sizeof(myint) << "\n";

    cout<<"-----------------"<<endl;

    int* ptr = new int; // creates memory space for 1 integer
    *ptr = 35;//stores the number 
    cout << *ptr << endl;
    cout<<"-----------------"<<endl;
    
    delete ptr;// Free the memory



    return 0;
}