#include<iostream>
#include<cctype>
using namespace std;

std::string to_alternating_case(const std::string& str)

{
    std::string newstr;
 for(int i = 0; i < str.length();i++){
    if(isupper(str[i])){
        newstr+=tolower(str[i]);
        
    }
    else{
        newstr+=toupper(str[i]);
    }
 }
 return newstr;
}
int main (){
    //for test
    cout<<to_alternating_case("hello worlD");

}