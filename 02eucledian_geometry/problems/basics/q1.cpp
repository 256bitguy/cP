// 1.Find the GCD of 24 and 18 using the Euclidean Algorithm.
#include<iostream>
using namespace std;
int gcd(int first,int second){
    while(second!=0){
        int remainder=first%second;
        first=second;
        second=remainder;
    }
    return first;
}
int main(){
    int first=24,second=18;
    int result=gcd(first,second);
    cout<<result<<"\n";
    return 0;
}