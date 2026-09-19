#include <iostream>
using namespace std;
void reverseArray(int *left_ptr , int *right_ptr);
int main(){
    int nums[]{1,2,4,5};
    int *left_ptr = &(nums[0]);
    int *right_ptr = &(nums[3]);
    reverseArray(left_ptr , right_ptr);
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;

}




void reverseArray(int *left_ptr , int *right_ptr){
    int helper{};
    while (true){
        if (left_ptr >= right_ptr){
            break;
        }else {
            helper = *left_ptr;
            *left_ptr = *right_ptr;
            *right_ptr = helper;
            left_ptr++;
            right_ptr--;
        }
    }
}