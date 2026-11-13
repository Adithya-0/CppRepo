//
//  main.cpp
//  FindFirstAndLastPosition
//
//  Created by Adithya R on 10/11/26.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> nums{};
    int target = 6;
    int low = 0;
    int high = nums.size() - 1;
    int mid = floor(static_cast<float>(high + low) / 2);
    int left_index = -1;
    int right_index = -1;
    int index = -1;
    while(low < high){
        mid = floor(static_cast<float>(high + low) / 2);
        if(target > nums[mid]){
            low = mid+1;
        }
        else if (target < nums[mid]){
            high = mid-1;
        }
        else if(target == nums[mid]){
            left_index = mid;
            high=mid-1;
        }
    }
    while(low < high){
        mid = floor(static_cast<float>(high + low) / 2);
        if(target > nums[mid]){
            low = mid+1;
        }
        else if (target < nums[mid]){
            high = mid-1;
        }
        else if(target == nums[mid]){
            right_index = mid;
            low=mid+1;
        }
    }
   
}
