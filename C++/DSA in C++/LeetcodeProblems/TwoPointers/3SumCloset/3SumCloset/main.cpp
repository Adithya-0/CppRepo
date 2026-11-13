//
//  main.cpp
//  3SumCloset
//
//  Created by Adithya R on 11/11/26.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> nums{-1,2,1,-4};
    sort(nums.begin() , nums.end());
    int target = 1;
    int i = 0;
    int j = nums.size() - 1;
    int current_sum{};
    int prev_i{};
    int prev_j{};
    while(i<j){
        current_sum  = nums[i] + nums[j];
        prev_i = i;
        prev_j = j;
        
        if(current_sum < target){
            i++;
        } else if(current_sum > target){
            j--;
        }
        if(prev_i == i and prev_j ==j){
            break;
        }
        
    }
    int num_to_add{};
    for(int l = 0 ; l < nums.size() ; l++){
        num_to_add = nums[l];
        if(abs(target - (current_sum + num_to_add)) < abs(target - current_sum)){
            current_sum = current_sum+num_to_add;
        }
    }
    cout << current_sum << endl;
}

