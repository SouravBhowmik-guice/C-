#include <iostream>//header file
#include <string>

using namespace std;//namespace

int main() {//body
    string name;
    cout << "Hello!" << endl;//printing hello
    cout<<"I am a practice program! :)"<<endl;
    cout << "Please enter your name: ";
    //entering the name
    getline(cin, name);
    cout << "Nice to meet you, " << name << "!" << endl;
    string age;
    cout <<"Please enter your age!:";
    //entering the age
    getline(cin, age);
    cout << "You are " << age << " years old!" << endl;
    cin>>age;



    cerr << "This is an error message!" << endl;//cerr for error message
    clog << "This is a log message!" << endl;//log message



    int x, y, z;//variable declaration
    x=y=50;
    z=100;
    cout<< "the sum of x+y+z is : "<< x+y+z <<endl ;

    return 0;
}
