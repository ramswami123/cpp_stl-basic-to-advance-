#include<iostream>
using namespace std;
//optmiszed impelementation of gcd programme
int gcd(int a,int b){
   if(a>b) swap(a,b);
   
   if(b==0){
       return a;
    }
    else{
        return gcd(a,b%a);
    }
}
int main(){
   int a,b;
   cin>> a>> b;
   //condition a is min ,bis max
   a=min(a,b);
   b=max(b,a);
   gcd(a,b);
}
