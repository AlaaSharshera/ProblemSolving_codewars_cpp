/*
Task
Create a method to see whether the string is ALL CAPS.
*/
#include<iostream>
using namespace std;
#include <string>


bool is_uppercase(const std::string &s) {
    for(std::string::size_type i = 0; i < s.length(); i++) {
        if(islower(s[i])) {
            return false;
        }
    }
    return true;
}



int main (){
    cout<<is_uppercase("L")<<endl;
}