#include <iostream>
#include <cstdio>
using namespace std;

//find The largest integer which can perfectly divide two integers is known as GCD or HCF of those two numbers.


int main() {
  
  int i;
 int kucuk_sayi;
 int buyuk_sayi;
 
 int real_gcd;
 
 cout<<"sayıları giriniz:"<<endl;
 cin>>kucuk_sayi>>buyuk_sayi;
 
 for(i=1;i<kucuk_sayi+1;i++){
     
if(kucuk_sayi%i ==0 && buyuk_sayi%i ==0){
        real_gcd=i;
       
    }
 }
 
     cout<<"en büyük ortak bölen:  "<<real_gcd;
 
   
return 0;
}
