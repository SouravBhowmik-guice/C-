#include<iostream>
using namespace std;

/*Pillars of the loop
  Iterator
  Starting point
  Test (controls when the stops)
  Increment(Decrement)
  Loop body
  
  */
int main(){
    /*for(unsigned int i{0}; i<10000; ++i){
        cout<<"I love c++"<<endl;

    }
    cout<<"Loop done!"<<endl;
    */

    //use size_t : a representation of some unsigned int for positive numbers (sizes)

    /*for(size_t-t i{0} ; i< 10 ; ++i){
        cout<< i <<" : I love c++ "<<endl;
    }
    cout<<"Loop done! "<<endl;
    */
   
    /*
    cout<<"sizeof (size_t) : "<<sizeof(size_t)<< endl;
    */

    //scope of the iterator
    /*
    for(size_t i{0}; i < 10 ; ++i){
        cout<<i<<" I love c++"<<endl;

    }
    cout<<"Loop done! "<<endl;
    cout<<"i : "<< i << endl; Compiler error : i is not in the scope
    */

    //Iterator declared outside the loop
    /*
    size_t i{0}; //Iterator defined outside

    for(i ; i < 10; ++i){
        cout << i << ": I love c++"<< endl;
    }
    cout<<"Loop done"<< endl;
    cout<<"--------------------------------"<<endl;
    cout<<"i : "<< i << endl;
    */

    //Leave out the declaration part
    /*
    size_t i{0}; //Iterator defined outside

    for(i ; i < 10; ++i){
        cout << i << ": I love c++"<< endl;
    }
    cout<<"Loop done"<< endl;
    cout<<"--------------------------------"<<endl;
    cout<<"i : "<< i << endl;


    */
   //dont hard code values : BAD!

   const size_t Count{10}; 

    for(size_t i{0} ; i < Count; ++i){
        cout << i << ": I love c++"<< endl;
    }
    cout<<"Loop done"<< endl;

    return 0;
}