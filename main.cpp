#include <iostream>
#include <math.h>
using namespace std;

 
float f (float x){
     float y;
     y= (pow(x,2))*(cos(x))+1;
     return y;
 }

 int main(){
     float a,b,n;

     do{
         cout << "inserire estremi" << endl;
         cin>>a;
         cin>>b;
     } while(f(a) * f(b)>=0 || a>b);

     float err;

     do {
         n =(a+b)/2;
         if(f(n)==0.0){
             break ;
         }
         else if(f(a) * f(n)>0){
             a=n;
         }else{
             b=n;
         }
         err=abs((b-a)/2);
     }while(err > 1e-6);

     cout << int(n*10000)/10000.0;

     return 0;

 }
