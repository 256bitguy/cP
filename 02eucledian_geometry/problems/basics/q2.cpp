// 2.Determine the GCD of 35 and 70 using the Euclidean Algorithm.
#include<iostream>
using namespace std;
int gcd(int first,int second){
    if(first<second){
        int temp=first;
        first=second;
        second=temp;
    }
    while(second!=0){
        int remainder=first%second;
        first=second;
        second=remainder;
    }
    return first;
}
int main(){
    int first=35,second=70;
    int result=gcd(first,second);
    cout<<result<<"\n";
    return 0;
}