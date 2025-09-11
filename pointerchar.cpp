#include<iostream>
using namespace std;

int main() {
    const char* message {"Hello world!"};
    cout<<" message : "<<message <<endl;
    //*message ="B"; // compiler error
    cout<<"message : "<<*message<<endl;

    //Allow users to modify the string
    char message1[] {"Hello world!"};
    message1[0] ='B';
    cout<< "message1 : "<< message1 <<endl;

    return 0;
}