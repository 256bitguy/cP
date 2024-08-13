/*Start with the result as 1. Convert 5 to binary, which is 101. Traverse the binary representation, and multiply when there's a 1.
Result: 3^5 = 243

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
    int base=3,expo=5;
    int res=binaryExpo(base,expo);
    cout<<"the value of 3 ^ 5 ="<<res<<"\n";
    return 0;
}