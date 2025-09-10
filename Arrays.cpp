#include<iostream>
using namespace std;

int main(){
    /*
    string cars[5]= {"m", "g", "t", "f", "d"};// 5 elements
    cout<< cars[3]//output that order of car starting from 0<<endl;

    string car[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    car[0] = "Opel";
    cout << car[0]<<endl;
    // Now outputs Opel instead of Volvo
    cout<<"--------------------"<<endl;
    */

     /*
    int scores [10]; //junk data

    //read data
    cout<<"score[0] "<< scores[0]<<endl;
    cout<<"score[1] "<< scores[1]<<endl;

    */

    //read with a loop
    /*
    for(size_t i {0}; i<10 ;++i){
        cout<<"scores["<< i <<"] : "<<scores[i]<<endl;
    }
        */
       /*
       scores[1] = 21;
       scores[2] = 23;

        //print the data out
        for(size_t i {0}; i<10 ;++i){
        cout<<"scores["<< i <<"] : "<<scores[i]<<endl;
    }
        */


        //write data in the loop
        /*
       for(size_t i{0}; i < 10 ; ++i){
        scores[i] = i * 10;
       }

            //print the data out
        for(size_t i {0}; i<10 ;++i){
        cout<<"scores["<< i <<"] : "<<scores[i]<<endl;
    }
        */

        //Declare and initialize at the same time
        /*
        cout<< endl;
        cout<<"Declare and initialize at the same time : "<< endl;

        double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

        for(size_t i{0}; i < 5; ++i){
            cout<< "salary[" << i << "] : "<< salaries[i] <<endl;
        }
        */

        //If you dont't initialize all the elements, those you leave out
        //are initialized to 0


        /*
        int families[5]{12, 7, 5};

        for(size_t i{9}; i < 5; ++i){
            cout<<"families[" << i <<"] : "<<families[i]<< endl;
        }
            */
        
        //omit the size of the array at declaration
        /*
        int class_sizes[] {10,12,15,11,18,17,23,56};  
        
        //will print this with a range based for loop
        for(auto value : class_sizes){
            cout <<"value : "<< value <<endl;
        }
            */

            /*
        const int birds[] {10,12,15,11,18,17,23,56};  
        birds[2] = 8;// error can't assign in const array
        // can assign if it is not const
        */

        //Sum up scores array, store result in sum

        int scores [] {2,5,8,2,5,6,9};
        int sum{0};

        for(int element : scores){
            su m +=element;
        }
        cout<<"Score sum : "<< sum << endl;

 
        

    return 0;
} 