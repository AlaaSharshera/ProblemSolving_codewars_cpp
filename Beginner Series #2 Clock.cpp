/*
DESCRIPTION:
Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight in milliseconds.
*/
#include <iostream>
using namespace std;
int past(int h, int m, int s) {
  return (h*60*60*1000)+(m*60*1000)+(s*1000);
}
int main (){
    //for test
    cout<<past(0,1,1);

}
