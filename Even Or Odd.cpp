/*
DESCRIPTION:
Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.
*/
#include <iostream>
using namespace std;
string even_or_odd(int num){
    return(num%2==0)?"Even" : "Odd";
}


int main (){
int num;
cin>>num;
cout<<even_or_odd(num);

}