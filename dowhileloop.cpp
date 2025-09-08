#include<iostream>
using namespace std;

//dowhile runs the body first then checks 
int main(){

 const int COUNT {10};
size_t i{0}; // Iterator declaration

do{
    cout<<"I love c++"<<endl;
    ++i;// incrementation
 } while(i < COUNT);
 
return 0;
}