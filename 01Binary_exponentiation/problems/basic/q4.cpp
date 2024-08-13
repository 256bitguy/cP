/*
Start with the result as 1. Convert 4 to binary, which is 100. Traverse the binary representation, and multiply when there's a 1.
Result: 4^4 = 256
*/
#include<iostream>
using namespace std;
int binaryExpo(int base , int expo){
    int res=1;
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
    int base=4;
    int expo=4;
    int res=binaryExpo(base,expo);
    cout<<"the result of 4 ^ 4 ="<<res<<"\n";
    return 0;
}
