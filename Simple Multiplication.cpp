//DESCRIPTION:
//problem => multiplying a given number by eight if it is an even number and by nine otherwise.

#include <iostream>
using namespace std;


int simpleMultiplication(int number){


// if (number%2==0){
//     return number*8;
// }
// else{
//   return number*9;
// }

// or with ternary operator
  
return(number%2==0)? number*8 : number*9 ;
}

int main (){


int number;
cin>>number;
cout<<simpleMultiplication( number);


}