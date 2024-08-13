/*
Any number raised to the power of 0 is 1. So, 5^0 = 1.
*/
#include<iostream>
using namespace std;
int binaryExpo(int base,int expo){
    int res=1;
    while(expo>0){
       if(expo%2==1){res*=base;} 
    
    base*=base;
    expo/=2;
}
return res;
}

int main(){
    int base=3,expo=0;
    int res=binaryExpo(base,expo);
    cout<<"the value of 3 ^ 0 ="<<res<<"\n";
    return 0;
}