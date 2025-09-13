#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int countdigits(int n)
{
    int cnt =(log10(n)+1);
    return cnt;
}
int main(){
    int n;
    cout<<"Enter the digits : "<<endl;
    cin>>n;
    countdigits(n);
    cout << "Number of digits: " <<countdigits(n)<< endl;
    return 0;
}

