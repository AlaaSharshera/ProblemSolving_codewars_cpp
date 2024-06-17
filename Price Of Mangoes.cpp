/*
DESCRIPTION:
There's a "3 for 2" (or "2+1" if you like) offer on mangoes. For a given quantity and price (per mango), calculate the total cost of the mangoes.

Examples
mango(2, 3) ==> 6    # 2 mangoes for $3 per unit = $6; no mango for free
mango(3, 3) ==> 6    # 2 mangoes for $3 per unit = $6; +1 mango for free
mango(5, 3) ==> 12   # 4 mangoes for $3 per unit = $12; +1 mango for free
mango(9, 5) ==> 30   # 6 mangoes for $5 per unit = $30; +3 mangoes for free
*/
#include <iostream>
using namespace std;
int mango(int quantity, int price_per_unit){
    int offer = quantity/3;
   int kilos_without_offer=quantity-offer;
   int total_price=kilos_without_offer*price_per_unit;
   return total_price;
//   if (offer == 0) {
//      cout<<"# "<< kilos_without_offer <<" mangoes for $"<<price_per_unit<<" per unit = $"<<total_price<<"; no mango for free";
//   }
//   else if (offer ==1){
//      cout<<"# "<< kilos_without_offer <<" mangoes for $"<<price_per_unit<<" per unit = $"<<total_price<<"; +"<<offer<<" mango for free";
//   }
//   else{
//      cout<<"# "<< kilos_without_offer <<" mangoes for $"<<price_per_unit<<" per unit = $"<<total_price<<"; +"<<offer<<" mangoes for free";
//   }

}
int main (){
    int quantity , price_per_unit;
    cin>>quantity>>price_per_unit;
    cout<<mango(quantity,price_per_unit);
   



}