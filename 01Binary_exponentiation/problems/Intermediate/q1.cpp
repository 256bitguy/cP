/*
1.Write a C++ function for binary exponentiation that computes base^exponent. Test it with base = 7 and exponent = 12.
*/
#include<iostream>
using namespace std;
long long int binaryExpo(long long int base, long long int expo){
   long long int res=1;
    while(expo>0){
        if(expo%2==1){
            res*=base;
        }
        base*=base;
        expo/=2;
    }
    return res;
}
int main(){
   long long int base=7;
   long long int expo=12;
   long long int res=binaryExpo(base,expo);
    cout<<"the value of 7^ 12="<<res<<"\n";
    return 0;
}