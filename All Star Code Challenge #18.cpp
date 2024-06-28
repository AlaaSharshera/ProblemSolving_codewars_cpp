/*
Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

If no occurrences can be found, a count of 0 should be returned.
*/
#include<iostream>
#include <string>
using namespace std;
 int strCount(const std::string& word, char letter){
   int count = 0;
    for(int i =0;i<word.length();i++){
        if(word[i]==letter){
       count+=1;
    }
    }
     return count;


}





int main (){
    //for test
    cout<<strCount("alaa",'a');
}