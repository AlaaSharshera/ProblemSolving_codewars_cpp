/*
Finish the solution so that it sorts the passed in array of numbers. If the function passes in an empty array or null/nil value then it should return an empty array.

For example:

sortNumbers({1, 2, 10, 50, 5}) // sholud return {1, 2, 5, 10, 50}
*/




#include <vector>
#include <algorithm> 
#include <iostream>  
using namespace std;

std::vector<int> sortNumbers(std::vector<int> nums) {
    
    if (nums.empty()) {
        return {}; 
    }

    
    std::sort(nums.begin(), nums.end());

    return nums;
}

int main() {
    
    std::vector<int> nums = {1, 2, 10, 50, 5};
    std::vector<int> sortedNums = sortNumbers(nums);

    for (int num : sortedNums) {
        std::cout << num << " ";
    }

    return 0;
}

