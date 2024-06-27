/*
DESCRIPTION:
It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string.
 You're given one parameter, the original string. You don't have to worry about strings with less than two characters.
*/
#include<iostream>
using namespace std;


#include <string>

using namespace std; 

// string sliceString (string str )
// {
//   string newstr="";
//   for(int i=0;i<str.length();i++){
//     if(str[i]==str[0]||str[i]==str[str.length()-1]){
//      continue;
//   }
//   else{
//     newstr+=str[i];
//   }
  
// }
// return newstr;
// }

//--------------------------------------------------------------
// string sliceString(string str) {
//     string newstr = "";
//     for (int i = 0; i < str.length(); i++) {
//         if (i != 0 && i != (str.length() - 1)) {
//             newstr += str[i];
//         }
//     }
//     return newstr;
// }
//--------------------------------------------------------------


string sliceString(string str) {
    // if (str.length() <= 2) {
    //     return "";
    // }
    return str.substr(1, str.length() - 2);
}



int main(){
string str;
cin>>str;
cout<<sliceString(str);
}