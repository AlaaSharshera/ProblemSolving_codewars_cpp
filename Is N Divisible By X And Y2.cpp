/*
DESCRIPTION:
Create a function that checks if a number n is divisible by two numbers x AND y. All inputs are positive, non-zero numbers.
*/
#include <iostream>
using namespace std;
bool isDivisible(int n, int x, int y) {
//return (n%x==0 && n%y==0 );
//or Nested ternary operator
return (n&&x&&y!=0)?((n%x==0 && n%y==0 )?true :false):false;


}
int main (){
    int n ,x,y;
    cin >> n >> x >> y;
   cout<< isDivisible(n,x,y);

}
