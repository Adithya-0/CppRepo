//
//  main.cpp
//  ArrayADTChallenges
//
//  Created by Adithya R on 09/11/26.
//

#include <iostream>
using namespace std;
struct Array{
    int *A;
    int length;
};

int single_missing_el(Array &arr1){
    int diff = *(arr1.A) - 0;
    int new_diff{};
    for(int i = 0 ; i< arr1.length ; i++ ){
        new_diff = *(arr1.A + i) - i;
        if(new_diff!=diff){
            return *(arr1.A + i) - 1;
        }
    }
    return -1;
}

void multiple_missing_el(Array &arr1){
    int diff{};
    int j = 1;
    for(int i = 1 ; i < arr1.length ; i++){
        diff = *(arr1.A + i) - *(arr1.A+i-1);
        if(diff!=1){
            while(j < diff){
                cout << *(arr1.A+i-1) +j << endl;
                j++;
            }
            j = 1;
        }
        
    }
}
void findDuplicateinSortedArray(Array &arr1){
    int last_duplicate = 0;
    int count = 1;
    for(int i = 0 ; i < arr1.length-1 ; i++){
        if(*(arr1.A+i) == *(arr1.A+i+1) and *(arr1.A+i) != last_duplicate){
            last_duplicate = *(arr1.A+i);
            cout << *(arr1.A+i) << endl;
        }
        if(*(arr1.A+i) == *(arr1.A+i+1)){
            count++;
        }
        if((*(arr1.A+i) != *(arr1.A+i+1) and count > 1) or ((i == arr1.length-2) and *(arr1.A+i) == last_duplicate )){
            cout << "Count " << count << endl;
            count = 1;
        }
    }
}
void findDuplicatesinSortedArrayHashing(Array &arr1 , int max_el){
    int *temp = new int[max_el+1]{};
    for(int i = 0 ; i < arr1.length ; i++){
        *(temp + *(arr1.A+i)) = *(temp + *(arr1.A+i)) + 1;
    }
    for(int i = 0 ; i <= max_el ; i++ ){
        if(*(temp + i) > 1){
            cout << i << " is present " << *(temp + i) << " times" << endl;
        }
        
    }
    delete [] temp;
}
void multiple_missing_el_using_hashing(Array &arr1 , int max_element){
    
    int *temp_arr = new int[max_element + 1]{};
    for(int i = 0 ; i<arr1.length ; i++){
        *(temp_arr + *(arr1.A + i)) = 1;
    }
    for(int i = 1 ; i <= max_element ; i++){
        if(*(temp_arr + i) == 0){
            cout << i  << endl;
        }
    }
    
}

void pair_whose_sum_is_k(Array &arr1 , int max_element , int target_sum){
    int *temp = new int[max(max_element , target_sum)+1]{};
    for(int i =0 ; i < arr1.length ; i++){
        if(*(arr1.A+i) <= target_sum){
            if(*(temp  - *(arr1.A + i) + target_sum) == 1){
                cout << "Pair found" << endl;
                cout << *(arr1.A + i) << " " << target_sum - *(arr1.A + i) << endl;
        }
            *(temp + *(arr1.A + i)) = 1;
        }
        
    }
    delete [] temp;
    
}
void pair_whose_sum_is_k(const Array &arr1, int k) {
    int i = 0;
    int j = arr1.length - 1;

    // Run until the two pointers meet
    while (i < j) {
        int current_sum = arr1.A[i] + arr1.A[j];

        if (current_sum == k) {
            std::cout << arr1.A[i] << " " << arr1.A[j] << "\n";
            i++;
            j--;
        }
        else if (current_sum < k) {
            // Sum is too small -> advance left pointer to increase sum
            i++;
        }
        else {
            // Sum is too large -> retreat right pointer to decrease sum
            j--;
        }
    }
}
void display(const Array &arr1){
    for(int i = 0; i < arr1.length ; i++){
        cout << *(arr1.A + i) << endl;
    }
}
int main(int argc, const char * argv[]) {
    Array arr1;
    arr1.A = new int[10];
    arr1.length = 10;
    int current_element{};
    for(int i = 0;i < arr1.length ; i++){
        cin >> current_element;
        *(arr1.A + i) = current_element;
    }
    cout << "RESULT" << endl;
    pair_whose_sum_is_k(arr1 , 10);
}
