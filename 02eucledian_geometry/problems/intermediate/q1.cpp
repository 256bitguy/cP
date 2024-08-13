//  1.Write a C++ function that implements the Euclidean Algorithm for finding the GCD of two numbers and use it to find the GCD of 63 and 84.
#include<iostream>
using namespace std;
int gcd(int first,int second){//84 63
    while(second!=0){
        if(second>first){
            int temp=first;//21
            first=second;//42
            second=temp;//21
        }
        int temp=first-second;//21 42 21
        first=second;//63 21 21
        second=temp;//21 42 21
        // cout<<"temp ={ "<<temp<<"}  first ={ "<<first<<" }  second ={ "<<second<<"\n";/
        }
        return first;
}
int main(){
    int first=84,second=63;
    int result=gcd(first,second);
    cout<<result<<"\n";
    return 0;
}