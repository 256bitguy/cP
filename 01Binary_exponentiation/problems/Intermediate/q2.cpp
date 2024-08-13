/*
You can use binary exponentiation to find the last two digits of 7^777 by taking the result modulo 100.
 After calculating, you will find that the last two digits are 43.*/

 #include<iostream>
 using namespace std;
    long long int binaryExpo(long long int base,long long int expo)
    {
        long long int res=1;
        while(expo>0){
            cout<<"res->{"<<res<<"}  "<<"base->{"<<base<<"}  "<<"expo->{"<<expo<<"}  "<<"\n";
            if(expo%2==1){
                res=(res%100*base%100)%100;
            }
            base=(base%100*base%100)%100;
            expo/=2;
        }
        return res;
    }    
    int main(){
        long long int base=7,expo=777;
        long long int res=binaryExpo(base,expo);
        res%=100;
        cout<<"the last two digits of 7^777 by taking the result modulo 100="<<res<<"\n";
        return 0;
    }
