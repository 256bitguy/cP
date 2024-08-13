// 3.Calculate the GCD of 14 and 28 using the recursive version of the Euclidean Algorithm.
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return  gcd(b,a%b);
}
int main(){
    int a=256,b=32;
    int res=gcd(a,b);
    cout<<res<<"\n";
    return 0;
}