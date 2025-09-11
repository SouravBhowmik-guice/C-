#include<iostream>
using namespace std;

int main(){
    //Declare array 
   /*
    char message [5] {'H', 'e', 'l', 'l', 'o'};

    //Print out the array through looping
    cout<<"message : ";
    for(auto c : message){
        cout<<c;

}
cout<< endl;
cout<< "size : " << sizeof(message) <<endl;

//can also modit=fy elements in char array
cout<<endl;
cout<<"modify array data : "<<endl;

message[1] ='a';

//Print out the array
cout<<"message : ";
for(auto c : message){
    cout<<c;
}
cout<<"-------------------"<<endl;
*/

char message1 [6] {'H','E','L','L','O','\0'};
cout<< "message1 " <<message1 <<endl;
//if we remove the end null zero and char has 6 elements
//it will automatically recognize the null and fill it
//if we leave space in char then it will show error
//or it will print the message along with some 

//string literal
char message2 []{"Hello"};
cout<<"message3 : "<< message2<<endl;
cout<<"sizof(message2) : "<<sizeof(message2)<< endl;

return 0;
}