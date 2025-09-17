#include<iostream>
using namespace std;

int main(){

    int mark;
    cout << "Enter your mark (100) : ";
    cin >> mark;
    
     if (mark >= 91 && mark <= 100 ) cout<< "A1";
    else if (mark >= 81 && mark <= 90) cout<< "A2";
    else if (mark >= 71 && mark <= 80) cout << "B1";
    else if (mark >= 61 && mark <= 70) cout << "C1";
    else if (mark >= 51 && mark <= 60) cout << "D1";
    else if (mark >= 41 && mark <= 50) cout << "E1";
    else if (mark >= 33 && mark <= 40) cout << "F1";
    else  {
          cout << "FAIL"; 
        }
   
    return 0;
}