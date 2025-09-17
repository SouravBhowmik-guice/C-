#include<iostream>
using namespace std;

int main(){
    char op;
    double num1, num2;

    cout<<"Enter the operator(+, -, *, /) : "<<endl;
    cin>>op;
    cout<<"Enter one number : ";
    cin>> num1;
    cout<<"Enter another number : ";
    cin>>num2;

    switch (op) {
        case '+':
        cout<< num1 <<"+"<<num2<<"="<<(num1 +num2)<< endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0.0)
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            else
                cout << "Divide by zero situation" << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    
    return 0;

}