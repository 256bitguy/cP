/*
Start with the result as 1. Convert 6 to binary, which is 110. Traverse the binary representation, and multiply when there's a 1.
Result: 2^6 = 2
*/
#include<iostream>
using namespace std;
long long int binaryExpo(long long int base,long long int expo){
   long long int res=1;
    while(expo>0){
       if(expo%2==1){res*=base;} 
    
    base*=base;
    expo/=2;
}
return res;
}

int main(){
   long long  int base=7,expo=12;
   long long int res=binaryExpo(base,expo);
    cout<<"the value of 2 ^ 6 ="<<res<<"\n";
    return 0;
}