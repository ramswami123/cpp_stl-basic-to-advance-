#include<iostream>
using namespace std;
//optmiszed impelementation of gcd programme
int gcd(int a,int b){
   if(b==0){
       return a;
    }
    else{
        return gcd(b,b%a);
    }
}
int main(){
   int a,b;
   cin>> a>> b;
   gcd(a,b);
}
