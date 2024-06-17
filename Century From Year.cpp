/* 
=> Introduction
The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

=> Task
Given a year, return the century it is in.
 */
#include <iostream>
#include <cmath>
using namespace std;
int centuryFromYear(float year) 
{  //with built in function (ceil)
 return ceil(year/100);
    //or with if condition
    // int century =year/100 ;
    // return (year %100 !=0)?++century :century;
}
int main(){
    float year;
    cin>>year;
    cout<<centuryFromYear(year);
   
     
     
}