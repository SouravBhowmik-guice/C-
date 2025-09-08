#include<iostream>
#include<string>
using namespace std;

int main(){
    string firstname= "Sourav";
    string lastname= "Bhowmik";
    string fullname= firstname + " " + lastname;
    //quotes between f&l adds space between first and last name
    cout<<"My full name is :"<< fullname <<endl;

    string firstname1 ="John ";
    string lastname1 ="Doe";
    string fullname1= firstname1.append(lastname1);
    //you can also concatenate strings with the append() function
    cout<<"My friend name is :"<< fullname1 <<endl;
    cout<<"--------------------------------"<<endl;

    //C++ uses the + operator for both addition and concatenation
    //example:
    int xx=2;
    int xxx=5;
    int xxxx=xx+xxx; 
    cout<<"The sum of xx and xxx is :"<<xxxx << endl;
    cout<<"--------------------------------"<<endl;

    string str1="5";
    string str2="5";
    string str3=str1+str2;
    cout<<"The concatenation of string1 and string2 is :"<<str3<<endl;
    //The + operator adds numbers but concatenates strings
    cout<<"--------------------------------"<<endl;

    string txt= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //string length counts the characters in a string
    //including spaces and punctuation
    cout<<"The length of the txt string is :"<<txt.length()<<endl;
    cout<<"--------------------------------"<<endl;
    
 string str = "ADI";
    string str4 = "Harry";
    string mystring = "Hello";
    cout << mystring[mystring.length() - 4] << endl; 
    //prints from rhs to lhs starting from 0 index

    cout << "Length of str: " << str.length() << endl;
    cout << "Length of str1: " << str4.size() << endl;
    cout<<"--------------------------------"<<endl;

    //change string characters
    //use of .at() function
    string str5="Hello";
    cout<< str5<<endl;
    cout<< str5.at(0)<<endl;
    cout<< str5.at(2)<<endl;
    cout<< str5.at(str5.length()-1)<<endl;

    str5[0]='J';//use single quotes
    cout<< str5<<endl;// outputs as jello
    cout<<"--------------------------------"<<endl;

    //strings special characters
    // \', \", \\, \n, \t
    string txt1 ="My name \t is \"Sourav\" \\ Bhowmik.\n I live in \'Pakistan\'.";
    cout<< txt1 <<endl;
    cout<<"--------------------------------"<<endl;

    string fullname2;
    cout << "Enter your full name : ";
    getline(cin, fullname2); // get full name from user, including spaces
    cout << "Your full name is : " << fullname2 << endl;
    cout << "--------------------------------" << endl;

    //omitting namespace
    //i have use it before
    std::string greeting = "Hello sir/mam ";
    std::cout << greeting << std::endl ;
    cout<<"--------------------------------"<<endl;

    //c style string
    string url="https://www.w3schools.com/cpp/cpp_ref_cstring.asp";//link to the function library
    cout<<"Visit this link to know about c style string: "<<url<<endl;

    string greeting1 ="Hello";
    char greeting2[] ="Hello";
    cout<<"greeting1 is a string: "<<greeting1<<endl;
    cout<<"Greeting2 is a c style string: "<<greeting2<<endl;
    cout<<"--------------------------------"<<endl;
    



    return 0;
}