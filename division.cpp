#include<iostream>

int divisionnumbers(int first_param, int second_param){
int result= first_param / second_param;
return result;
}
 int main(){
    int f_number {1000};//first number
    int s_number {50};// second number
    std::cout<<"First number : "<<f_number<<std::endl;//1000
    std::cout<<"Second number : "<<s_number<<std::endl;//50
    std::cout<<"Division of f & s : "<<divisionnumbers(f_number, s_number)<<std::endl;//20


 }