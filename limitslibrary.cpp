#include <iostream>
#include <limits>
using namespace std;

int main(){
    string url="https://en.cppreference.com/w/cpp/types/numeric_limits.html";
    cout<<url<<endl;

    cout<<"The range for short is from "<<numeric_limits<short>::min()<<" to " <<numeric_limits<short>::max()<<endl;
    cout<<"The range for unsigned short is from "<<numeric_limits<short>::min()<<" to "<<numeric_limits<short>::max()<<endl;

    return 0;
}