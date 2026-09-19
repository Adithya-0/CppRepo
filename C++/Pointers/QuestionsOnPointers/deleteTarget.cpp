#include <iostream>

using namespace std;
int *compactArray(int* start_ptr, int* end_ptr, int target , int size);
int main(){
    int nums[]{5, 5, 5};
    int *num_ptr = &(nums[0]) ;
    int size = sizeof nums / sizeof nums[0];
    int *end_ptr {num_ptr};
    end_ptr = compactArray(num_ptr , &(nums[size]) , 5, size);
    // cout << *end_ptr << endl;
    // cout << *(end_ptr+1) << endl;
    // cout << "num_ptr: " << num_ptr << endl; // 6,12,77,08,880
    // cout << "end_ptr: " <<  &(nums[size-1])<< endl; // 6,12,77,08,896

    while(true){
        if (num_ptr  == end_ptr){ // end_ptr is pointing to the element which we want to exclue, so when num_ptr hits end_ptr we will break, because we dont want to print the number pointed to by end_ptr
            break;
        }
        cout << *num_ptr << " " << endl;
        num_ptr++;
    }
    return 0;
}

int *compactArray(int* start_ptr, int* end_ptr, int target , int size){
   int *reader = start_ptr;
   int *writer = start_ptr;
   while (reader < end_ptr){
    if (*reader == target){
        reader++;
        continue;;
    }
    
    
    *writer = *reader;
    writer++;
    reader++;
   }
   return writer;
} 