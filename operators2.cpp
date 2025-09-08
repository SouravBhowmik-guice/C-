#include <iostream>
#include <string>
using namespace std;

int main(){
    bool a{true};
    bool b{false};
    bool c{true};

    cout<< boolalpha;// to print true/false
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    cout<<"c : "<<c<<endl;
    //Evaluates to true if all operands are true
    //A single false operand will drag
    //the entire expression to false

    cout<<"Basic and operations"<<endl;

    cout<<"a && b : "<<(a&&b)<<endl;//false
    cout<<"a && c : "<<(a&&c)<<endl;//true
    cout<<"a && b && c : "<<(a&&b&&c)<<endl;//false

    //Evaluates to true if any of the operands is true
    //A single true operand will make
    //the entire expression true
    cout<<endl;
    cout<<"Basic or operations"<<endl;
    cout<<"a||b : "<<(a||b)<<endl;//true
    cout<<"a||c : "<<(a||c)<<endl;//true
    cout<<"a||b||c : "<<(a||b||c)<<endl;//true

    cout<<endl;
    cout<<"Basic not operations"<<endl;

    cout<<"!a : "<<(!a)<<endl;//false
    cout<<"!b : "<<(!b)<<endl;//true    
    cout<<"!c : "<<(!c)<<endl;//false

    //combination of all these operators
    cout<<endl;
    cout<<"Combination of all operators"<<endl;
    cout<<"!(a&&b) || c : "<<(!(a&&b) || c)<<endl;//true

    //parenthesis is a must
    return 0;


}