#include <iostream>
using namespace std;
void printWindowMax(int *arr , int size , int k);
int main(){
    int nums[] {100 , 60 ,70 , 80 , 60 };
    int *num_ptr = &(nums[0]);
    printWindowMax(num_ptr , 4 , 4);
}


void printWindowMax(int *arr , int size , int k){
    int least {*arr};
    for (int j = 0 ; j < size ; ++j){
        if (least > *(arr + j) ){
            least = *(arr + j);
        }
    
    }
    signed int *pointer_at_end_of_array = arr + size - 1;
    signed int *ext_pointer = arr;
    signed int helper{};
    signed int i = 0;
    helper = least;
    while (i < size){
        signed int *end_ptr = arr + k;
        if ((pointer_at_end_of_array - arr) < k-1){
            break;
        }
        while (true){
            if(arr == end_ptr){
                arr++;
                break;
            }
            if(helper < *arr){
                helper = *arr;
            }
            arr++;
            



        }
        cout << helper << " ";
        helper = least;
        i++;
        arr = ext_pointer;
        arr = arr + i;
        
    }
    cout << endl;
}