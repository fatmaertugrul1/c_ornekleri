#include <iostream>
#include <cstdio>
using namespace std;
//C++ Program to Check Whether a Number is Palindrome or Not
//This program reverses an integer (entered by the user) using while loop. Then, if statement is used to check whether the reversed number is equal to the original number or not.

int main() {
int i;
int arr[5];
cout<<"sayıyı giriniz:";

for(i=1;i<6;i++){
    cin>>arr[i];
}


if(arr[1]==arr[5]&&arr[2]==arr[4]){
    
    
        
        for(i=1;i<6;i++){
        cout<<arr[i];
        }
         cout<<" bir palindrom sayıdır.";
        
        
   
    
    
}
else{ cout<<arr[5]<<" bir palindrom sayı değildir.";}



   
return 0;
}
