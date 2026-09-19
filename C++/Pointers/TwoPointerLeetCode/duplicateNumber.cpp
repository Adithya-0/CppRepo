#include <iostream>
#include <vector>
using namespace std;
int duplicateNumber(vector<int>& nums);
int main(){
    vector<int> nums {1,3,4,2,2};
    duplicateNumber(nums);
}

int duplicateNumber(vector<int>& nums){
    int max = nums.size() - 1;
    int *beginnin_ptr = &(nums[0]);
    int *stationary_ptr = &(nums[0]);
    int *moving_ptr = &(nums[nums.size() - 1]);
    int count {};

    while(true){
        if(*stationary_ptr == *moving_ptr){
            count++;
            moving_ptr++;
        }
    }
    
}