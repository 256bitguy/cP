/*
To calculate 2^1000 using binary exponentiation,
 the result is an incredibly large number.
  However, we can easily find the last digit by observing a pattern. 
  The last digit of 2^n repeats in a cycle: 2, 4, 8, 6. Since 1000 is a multiple of 4 (1000 / 4 = 250 with no remainder),
   the last digit is 6.*/
   #include<iostream>
   using namespace std;

   long long int binaryExpo(long long int base,long long expo){
    long long int res=1;
    while(expo>0){
        if(expo%2==1)res=(res*base)%100;
        base=(base*base)%100;
        expo/=2;
    }
    return res;
   }

   int main(){
    long long int base=2,expo=1000;
    long long int res=binaryExpo(base,expo);
    cout<<"The last two digit of 2^1000"<<res;
    return 0;
   }