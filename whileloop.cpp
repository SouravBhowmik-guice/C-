#include<iostream>
using namespace std;

int main(){

 const size_t COUNT {10};
size_t i{0}; // Iterator declaration

while(i < COUNT){
    cout<<"I love c++"<<endl;
    ++i; // incrementation
}
cout<<"Loop done!"<<endl;

return 0;
}