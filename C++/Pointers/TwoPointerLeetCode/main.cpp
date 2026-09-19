#include <iostream>
using namespace std;
void sortColours(vector <int>& nums);
int main(){
    vector <int> nums{2,0,1};
    sortColours(nums);
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    // cout << nums[3] << endl;
    // cout << nums[4] << endl;
    // cout << nums[5] << endl;
}

void sortColours(vector <int>& nums){
    int *num_ptr = &(nums[0]);
    int *end_ptr = &(nums[nums.size()-1]);
    int zero_ctr {};
    int one_ctr {};
    int two_ctr{};
    int j = 1;
    for (int i : nums){
        if (i == 0){
            zero_ctr++;
        } else if (i == 1){
            one_ctr++;
        } else if (i == 2){
            two_ctr++;
        }
    }
    one_ctr = one_ctr + zero_ctr;
    two_ctr = two_ctr + one_ctr;
    while (num_ptr <= end_ptr){
        if (j<=zero_ctr){
            *num_ptr = 0;
        }else if ((j > zero_ctr) && (j <= one_ctr)){
            *num_ptr = 1;
        }else if ((j > one_ctr) && (j <= two_ctr)){
            *num_ptr = 2;
        }
        num_ptr++;
        j++;
    }
    
}