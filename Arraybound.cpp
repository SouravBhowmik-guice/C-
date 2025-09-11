#include<iostream>
using namespace std;

int main(){
    int number[] {1,2,3,4,5,6,7,8,9,0};
    //read beyond bounds : will read garbage or crash the program
    cout<<"number[12] : " <<number[12]<<endl;

    return 0;
}