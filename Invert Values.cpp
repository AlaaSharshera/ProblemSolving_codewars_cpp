/*

DESCRIPTION:
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

[1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
[1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]
[] --> []

*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> invert(vector<int> values)


{ vector<int>inverted_values;
    for (int i = 0; i < values.size();i++)
    
    { inverted_values.push_back(- values[i]);
  

}
    return inverted_values;
}
int main(){
    vector<int> test={5,-2,0};
    for(int i=0; i < test.size();i++){
         cout<<invert(test).at(i)<<endl;

    }
   
   
   
}

