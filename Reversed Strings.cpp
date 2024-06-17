/*
DESCRIPTION:
Complete the solution so that it reverses the string passed into it.
*/
#include <iostream>
#include <string>
using namespace std;

string reverseString (string str ){
string newword;
for (int i =str.size()-1; i>=0; i--){
    newword+= str[i];

}
return newword;



}

int main (){
string word;
cin>>word;
cout<<reverseString(word);



}