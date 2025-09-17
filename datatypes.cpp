#include <iostream>
#include <iomanip>// used to set precision of floating point numbers
#include<string>

using namespace std;  
void displayMessage(){ //void is a function that does not return any value
        cout<<"Hello, World!"<<endl;//void is a function in itself that is outside the main
        //calling the void function will be done inside the main function
    }  

int main() {
    float number1 = 1.22376332737979f; //precision up to 6-7 digits
    double number2 = 12.79879438794879; //precision up to 15-16 digits
    long double number3 = 1.89473478734873456789l; //precision up to 18-19 digits
    cout<<"--------------------"<<endl;

    //default precision of everyone is 6 digits
    //to set the precision we can use the iomanip library
    //#include <iomanip> and then use the setprecision function
    //is is not possible to set precision of multiple datatypes at once unless we use fixed manipulator
    //if want to set precision of multiple datatypes at once we can code differently after each print statement

    bool iscodingfun{true};
    bool iscodingboring{false};
    cout<<"--------------------"<<endl;

    //print out the size of each datatype
    cout<<"Size of float datatype : "<< sizeof(float) <<" bytes"<< endl;
    cout<<"Size of double datatype : "<< sizeof(double) <<" bytes"<< endl;
    cout<<"Size of long double datatype : "<< sizeof(long double) <<" bytes"<< endl;
    cout<<"--------------------"<<endl;

    cout << setprecision(8)<< number1 << endl ;
    cout<<setprecision(12)<< number3 << endl ;
    cout << "Number1 is : " << number1 << endl;
    cout << "Number2 is : " << number2 << endl;
    cout << "Number3 is : " << number3 << endl;
    cout.unsetf(ios::fixed);
    cout << setprecision(6); // reset to default
    cout<<"--------------------"<<endl;

    //precision of each datatype (already printed above)
    cout<<"Is coding fun? "<< iscodingfun << endl;
    cout<<"Is coding boring? "<< iscodingboring << endl;
    cout<<"--------------------"<<endl;

    
    //boolean has 1 byte and can hold true or false values
    //char has 1 byte storing a single character
    //int has 4 bytes storing whole numbers
    //float has 4 bytes storing decimal numbers
    //double has 8 bytes storing decimal numbers
    //long double has 16 bytes

    char myGrade{'A'}; //single quotes for char
    char mySecondGrade{'B'};
    char myThirdGrade{'C'};
    cout<<"my grade is " << myGrade << endl;
    cout<<"my grade is " << mySecondGrade << endl;
    cout<<"my grade is " << myThirdGrade << endl;

    bool red_light{true};
    bool yellow_light{true};
    bool green_light{true};
    cout<<"--------------------"<<endl;

    if(red_light){
        cout<<"Red light is on. Stop!"<<endl;//if and else condition
    }
    else{
        cout<<"Red light is off. Go!"<<endl;
    }
    if(yellow_light){
        cout<<"Yellow light is on. Please wait!"<<endl;
    }
    
    if(green_light){
        cout<<"Green light is on. Go!"<<endl;
    }
    else{
        cout<<"Green light is off. Stop!"<<endl;
    }
    cout<<"--------------------"<<endl;
    string name{"Sourav"};
    cout<<"My name is "<<name <<endl;
    cout<<"--------------------"<<endl;
    
    

    displayMessage(); // Call the void function


    cout<<"--------------------"<<endl;
    auto x=33.44;//float variable
    auto y='A';//char variable
    auto z=true;//boolean variable
    //The auto keyword automatically detects the type of a variable based on the value you assign to it.


    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;  
    cout<<"Value of z is: "<<z<<endl;
    cout<<"--------------------"<<endl;

    auto var1=23.45f;//float variable 8 bytes
    auto var2=34.56;//double variable  12 bytes
    auto var3=45.67l;//long double variable 16 bytes

    //int modifier suffixes
    auto var4=34u;//unsigned int   
    auto var5=45ul;//unsigned long int
    auto var6=56ll;//long long int

    cout<<"Value of var1 is: "<<var1<<endl;
    cout<<"Value of var2 is: "<<var2<<endl;
    cout<<"Value of var3 is: "<<var3<<endl;
    cout<<"Value of var4 is: "<<var4<<endl;
    cout<<"Value of var5 is: "<<var5<<endl;
    cout<<"Value of var6 is: "<<var6<<endl;
    cout<<"--------------------"<<endl;

    int var7{123};// Declare and initialize
    cout<<"var7 : "<<var7<<endl;

    var7 = 555; // Reassign a new value
    cout<<"var7 : "<<var7<<endl;
    //error can happen if we use curly bracket instead of equality in reassigning value
    // can reassign any variable except const variable example below
    //careful with auto keyword as it can lead to unexpected type conversions

    const int x2 = 10;
// x2 = 20; // Error: assignment of read-only variable 'x2'
cout<<"--------------------"<<endl;

    int max{};
    
    int i{25};
    int o{19};

    cout<<"Using regular if"<<endl;

    /*if(i>o){
        max=i;
    }else{
        max=o;
    }
        */
       max = (i > o)? i: 22.5f; //ternary operator

    cout<<"max : "<<max<<endl;
    
    return 0;
}
