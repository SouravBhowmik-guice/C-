#include<iostream> 
using namespace std ; 

int main(){
    int n ,m  ; 
    cout<<"Enter n : " ;
    cin >> n ;

    int arr[n] ;
    cout<< "Enter your current array : " ;
    for(int i = 0 ; i < n ; i++ ) {
        arr[i] = ( i + 1 ) ;
    }

    cout << "Enter the element no to delete ( From 1 to n ) : " ;
    cin >> m ;

    if(m < 1 || m > n ){
        cout<< " Invalid position entered " ;
    }

    else{
        for(int i = m - 1 ; i < (m + 1) ; i++ ){
            arr[i] = arr[ i + 1 ] ;
        }
    }

    //cout<<" Your previous array " << " | "<< arr[i] <<" | " ;//
    // this will not work because i is not defined in this//
    // the correct code is written without defining i
    // i still dont have much knowledge in this part
    
    cout<<" Your previous array " << " | "<< arr <<" | " ;
    cout<< "Your updated array : " ;

    for(int i = 0 ; i<= (n-1) ; i++){
        cout<<" | "<< arr[ i ] << " | " ;
    }

    return 0 ;
}