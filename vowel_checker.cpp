#include <iostream>
#include <cstdio>
using namespace std;

//C++ Program to Check Whether a character is Vowel or Consonant.


int main() {
   
char c;
bool is_vowel=true;

cout<<"write your character:";
cin>>c;

if(c=='a'|c== 'e' |c=='u'|c== 'i'| c=='o'| c=='A'|c== 'E' |c=='U'|c== 'I' |c=='O')
{
    cout<<"your character is a vowel:  "<<c;
    
}
else
{
    cout<<"your character is a consonant:  "<<c;
}


    return 0;
}
