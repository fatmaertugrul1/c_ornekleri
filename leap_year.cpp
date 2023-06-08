#include <iostream>
#include <cstdio>
using namespace std;

//C++ Program to Check Leap Year
//All years which are perfectly divisible by 4 are leap years except for century years (years ending with 00), which are leap years only if they are perfectly divisible by 400.



int main() {
   int year;
   cout<<"write your year:  ";
   cin>>year;
   
   if(year%400==0){
       cout<<year<<"  is a leap year";
       
   }
   else if(year%100==0){
       cout<<year<<"  is not a leap year";
       
   }
   else if(year%4==0){
       cout<<year<<"  is a leap year";
   }
   

}
