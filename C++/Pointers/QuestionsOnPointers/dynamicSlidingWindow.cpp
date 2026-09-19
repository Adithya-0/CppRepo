#include <iostream>
using namespace std;

int maxSubarrayLen(int* arr, int size, int K);

int main(){
    int nums[] { 2, 3, 1, 1, 1, 1 };
    int *num_ptr = nums;
    
    // Test case from your run: K = 6 (Expected: 3)
    int gap = maxSubarrayLen(num_ptr, 6, 6);
    cout << "Max Length: " << gap << endl; 
    
    return 0;
}

int maxSubarrayLen(int* arr, int size, int K) {
    int gap = 0;
    int sum = 0;
    
    int* stationary_ptr = arr;       // Left pointer
    int* moving_ptr = arr;           // Right pointer
    int* array_end = arr + size;     // Boundary tracker
    
    // Clean, modern sliding window format
    while (moving_ptr < array_end) {
        // 1. Expand the window smoothly
        sum += *moving_ptr;
        moving_ptr++; 
        
        // 2. Shrink the window from the left ONLY if the constraint is broken
        while (sum > K && stationary_ptr < moving_ptr) {
            sum -= *stationary_ptr;
            stationary_ptr++;
        }
        
        // 3. Since sum is safely <= K here, calculate current distance
        // moving_ptr has already been incremented, so (moving_ptr - stationary_ptr) 
        // is exactly equal to the total elements inside our active window!
        if ((moving_ptr - stationary_ptr) > gap) {
            gap = moving_ptr - stationary_ptr;
        }
    }
    
    return gap;
}