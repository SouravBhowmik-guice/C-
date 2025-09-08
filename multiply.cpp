#include <iostream>

int multiplynumbers(int first_param, int second_param){
int result= first_param * second_param;
return result;
}

int main() {
    int f_number {20}; //first number
    int s_number {50}; //second number

    std::cout<<"First number  : "<< f_number<< std::endl;//20
    std::cout<<"Second number : "<<s_number<<std::endl;//50
    std::cout<<"Multiplication of f & s : "<<multiplynumbers(f_number,s_number)<<std::endl;//1000

}




    

