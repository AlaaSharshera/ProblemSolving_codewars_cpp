/*
DESCRIPTION:
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
*/
#include <iostream>
#include <string>
using namespace std;

string removeExclamationMarks(string str){
 string newstr="";
  
for(int i=0; i<str.length();i++){
if (str[i] == '!'){

continue;
}
newstr+=str[i];

}
return newstr;
}

int main(){
string str;
cin >> str;
cout<<removeExclamationMarks(str);

}
