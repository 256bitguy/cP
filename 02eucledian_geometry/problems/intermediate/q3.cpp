// 3.Determine the GCD of 12345 and 54321 using the Euclidean Algorithm. How many iterations are required?
#include<iostream>
using namespace std;
int gcd(int first,int second){
    static int i=1;
    if(second>first){
        int temp=first;
        first=second;
        second=temp;
    }
    i++;
    cout<<i<<" ";
    if(second==0) return first;
    return gcd(second,first%second);//modulo is for more better than subtraction
}
int main(){
    int first=12345,second=54321;
    int result=gcd(first,second);
    cout<<result<<"\n";
    return 0;
}