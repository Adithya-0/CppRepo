/*
Challenge 1: The Fast-Forward Filter (Basics & Arithmetic)Goal: 
Modify an array in place using pointer arithmetic instead of array indexing.
Task: Write a function void squareEvenIndices(int* arr, int size) that uses a single pointer to traverse an array.
Constraint: You cannot use square brackets ([]) anywhere in the function.
Logic: Square the value of every element located at an even index (0, 2, 4, etc.).
Expected Input/Output: [1, 2, 3, 4, 5] becomes [1, 2, 9, 4, 25].*/

#include <iostream>
using namespace std;
void squareEvenIndices(int*arr , int size);
int main(){
    int nums[] {1 ,2 , 3, 4, 5 , 6 , 7};
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;
    cout << nums[4] << endl;
    cout << nums[5] << endl;
    cout << nums[6] << endl;
    cout << endl;
    cout << "--------------" << endl;
    cout << endl;
    int *nums_ptr = nums;
    squareEvenIndices(nums_ptr , 7);
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;
    cout << nums[4] << endl;
    cout << nums[5] << endl;
    cout << nums[6] << endl;
    return 0;
}

void squareEvenIndices(int*arr , int size){
    for (int i = 0; i < size ; i = i + 2){
        if (i % 2 == 0) {
            *(arr + i) = (*(arr + i)) * (*(arr + i));
        }
    }
}