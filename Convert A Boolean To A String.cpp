/*0
DESCRIPTION:
Implement a function which convert the given boolean value into its string representation.

Note: Only valid inputs will be given.
*/
#include<iostream>
using namespace std;
string convert(bool value){
// if (value ==false){
//     return "false";
    
// }
// else {
//         return "true";
//     }
return (value==true ? "true" : "false");
}



int main (){
bool value;
cin>>value;
cout <<convert(value);
}