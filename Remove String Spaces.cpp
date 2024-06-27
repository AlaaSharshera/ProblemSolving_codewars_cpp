/*
DESCRIPTION:
Write a function that removes the spaces from the string, then return the resultant string.
*/
#include<iostream>
using namespace std;
#include <string>

// std::string no_space(const std::string& x)
// { std::string str;
//   for(int i = 0; i < x.size();i++){
//     if(x[i] == ' '){
//         continue;

//     }
//     str += x[i];

    
//   }
//   return str;
// }
std::string no_space(const std::string& x)
{ std::string str;
  for(int i = 0; i < x.size();i++){
    if(x[i] != ' '){
      str += x[i];

    }
 
  }
  return str;
}


int main(){

cout<<no_space("hi alaa");
}