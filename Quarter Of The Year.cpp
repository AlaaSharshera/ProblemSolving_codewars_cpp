/*
DESCRIPTION:
Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

For example: month 2 (February), is part of the first quarter; month 6 (June), is part of the second quarter; and month 11 (November), is part of the fourth quarter.

Constraint:

1 <= month <= 12
*/
#include<iostream>
using namespace std;
int quarter_of(int month){
 if (month>0 && month<=12){

     if (month <=3){
        return 1;
        // cout<<"is part of the first quarter";
    }
    else  if (month <=6){
        return 2;
        // cout<<"is part of the second quarter";
    }
     else  if (month <=9){
        return 3;
        // cout<<"is part of the third quarter";
    }
 else  {
    return 4;
        // cout<<"is part of the fourth quarter";
    }
   }
   return 0;

}
int main (){
    int month;
    cin>>month;
    cout<<quarter_of(month);
   



}