//This is an example from codewave
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int N;
    cin >> N;

    if(N & 1) {
        cout << "true" << endl;
    }
    
    
    else {
        cout << "false" << endl;
    }

    //The & operator was used because 
    //it is the bitwise AND operator that 
    //allows checking the least significant 
    //bit (LSB) of an integer directly in binary form

    return 0;
}