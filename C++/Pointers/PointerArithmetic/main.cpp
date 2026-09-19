#include <iostream>

using namespace std;

int main(){
    int nums[5]{};
    int *int_ptr = &(nums[0]);
    //int *int_ptr2 = &nums; // Error . --> a value of type "int (*)[5]" cannot be used to initialize an entity of type "int *"
    int (*int_ptr2)[5] = &nums; // Pointer to an array of exactly 5 nums
    int *int_ptr3 = nums;
    cout << int_ptr << endl; // 6,099,692,272.
    cout << int_ptr2 << endl; // 6,099,692,272.
    cout << int_ptr3 << endl; // 6,099,692,272.
    cout << endl;
    cout << *int_ptr << endl;
    cout << *int_ptr2 << endl;
    cout << *int_ptr3 << endl;
    cout << endl;
    int_ptr++;
    int_ptr2++;
    int_ptr3++;
    cout << int_ptr << endl; // 6,099,692,276 --> Upon incrementing been pushed by 4 bytes
    cout << int_ptr2 << endl; // 6,099,692,292 --> 5*4 = 20. Upon incremeting it has been pushed by 20 bytes, ie the size of this array which contains 5 elements of integers (4 bits each)
    cout << int_ptr3 << endl; // 6,099,692,276 --> Upon incrementing been pushed by 4 bytes
    int_ptr = int_ptr + 2; // 6,099,692,284
    int_ptr2 = int_ptr2 + 2; // 6,099,692,332

    // int_ptr_1 and int_ptr_3 behave the same way
    // Even though all 3 print the same thing, they behave in different ways
    return 0;
}