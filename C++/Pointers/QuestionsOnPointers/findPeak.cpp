#include <iostream>
using namespace std;
int* findPeak(int *arr, int size);
int main(){
    int nums[]{1,2,3,4,7,11,10};
    int *num_ptr = &(nums[0]);
    int *peak_ptr = findPeak(num_ptr , 7);
    cout << *peak_ptr << endl;
    return 0;
}

int* findPeak(int *arr, int size){
    int *cached_beginning_ptr = arr;
    int *end_ptr = arr +(size - 1);
    if ((arr == cached_beginning_ptr) && (*arr) >= *(arr+1)){
        return arr;
    }
    while(arr <= end_ptr){
        arr++;
        if ((arr == end_ptr) && (*arr >= *(arr-1))){
            return arr;
        }
        if ((*arr >= *(arr + 1)) && (*arr >= *(arr - 1))){
            return arr;
        }
        
    }
    return nullptr;
}