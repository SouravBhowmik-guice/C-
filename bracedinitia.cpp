#include <iostream>
using namespace std;

int main(){
    
    //Braced initialization
    //Variable declaration and initialization
    int elephant_count{50};// initializing with 0
    int lion_count{20};//initializing with 10
    int dog_count{100};//initializing with 100
    int cat_count{};//default initializing with 0

    int domesticated_animals{dog_count+ cat_count};//initializing with expression

    cout << "Number of elephants: " << elephant_count << endl;
    cout << "Number of lions: " << lion_count << endl;   
    cout << "Number of dogs: " << dog_count << endl;
    cout << "Number of cats: " << cat_count << endl;
    cout << "Number of domesticated animals: " << domesticated_animals << endl;

    /*This is just an example of how you can write the comment 
    in paragaphs*/

    signed int value1{10};
    signed int value2{-300};
    //signed int value5{2.3};//error: decimal number not allowed
    //signed int can hold both positive and negative values

    cout << "value1 is: " << value1 << endl;
    cout << "value2 is: " << value2 << endl;
    cout<<"Size of value1: "<< sizeof(value1) <<" bytes"<< endl;
    cout<<"Size of value2 "<< sizeof(value2)  <<" bytes"<< endl;

    unsigned int value3{12};
    //unsigned value only allows positive values
    //unsigned int value4{-23};//error: negative number not allowed
    



    return 0;
}