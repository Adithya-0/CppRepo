#include <iostream>
#include <algorithm>
using namespace std;
struct Array{
    int *A;
    int size;
    int length; // ---> How many variables are currently in the array
};
void my_insert(int index , int value , Array &arr){
    if(index >=0 and index < arr.size){
        if(index < arr.size and index < arr.length){
            for(int i = arr.length ; i>=index ; i--){
                *(arr.A + i) = *(arr.A + i -1);
            }
            *(arr.A + index) = value;
            arr.length++;
        }
    }
  
}
int sum(Array &arr){
    int sum{};
    for(int i = 0 ; i < arr.length ; i++){
        sum = sum + *(arr.A + i);
    }
    return sum;
}
int get_element(int index , const Array &arr){
    if(index > arr.length-1 or index < 0){
        return -1;
    }
    return *(arr.A + index);
    return -1;
}
void set_element(int index , const Array &arr , int value){
    if(index > arr.size-1 or index < 0){
        return;
    }
    *(arr.A + index) = value;
}
int return_max(const Array &arr){
    int max = *(arr.A + 0);
    for(int i = 0 ; i < arr.size ; i++){
        if(*(arr.A + i) > max){
            max = *(arr.A + i);
        }
    }
    return max;
}

int my_binary_search(int value , const Array &arr){
    int low = 0;
    int high = arr.length - 1;
    int mid = floor((low + high)/2);
    while (low <= high){
        mid = floor((low + high)/2);
        if(*(arr.A + mid) == value){
            return mid;
        }
        if(*(arr.A + mid) > value){
            high = mid-1;
        } else{
            low = mid + 1;
        }
    }
    return -1;
    
}

int linear_search(int value , const Array &arr){
    int temp{};
    for(int i = 0 ; i < arr.length ; i++){
        if(*(arr.A+i) == value){
            if(i != 0){
                temp = *(arr.A + i);
                *(arr.A + i) = *(arr.A + i - 1);
                *(arr.A + i - 1) = temp;
            }
            return i;
        }
    }
    return -1;
}

void left_shift(Array &arr){
    int *ptr = arr.A;
    while(ptr < arr.A + arr.length - 1){
        *(ptr) = *(ptr+1);
        ptr++;
    }
    *(arr.A + arr.length - 1) = 0;
}

void rotate_array(Array &arr){
    int *ptr = arr.A;
    int first_num = *(ptr);
    while(ptr < arr.A + arr.length - 1){
        *(ptr) = *(ptr+1);
        ptr++;
    }
    *(arr.A + arr.length - 1) = first_num;
}


void my_delete(int index , Array &arr){ // --> Have to pass by reference because when we update the length attribute and we dont pass by refercne, the length attribute will be updated in the copy, not in the orignial.
    if(index > arr.length){
        return;
    }
    for(int i = index ; i <= arr.length-1 ; i++){
        *(arr.A + i) = *(arr.A + i + 1);
        
    }
    arr.length--;
}
void display(const Array &arr){
    for(int i = 0 ; i < arr.size ; i++){
        cout << *(arr.A + i) << endl;
    }
}

void reverseArray(Array &arr){
    int *left_ptr = arr.A;
    int *right_ptr = arr.A + arr.length - 1;
    int temp{};
    while(left_ptr <= right_ptr){
        temp = *(left_ptr);
        *left_ptr = *right_ptr;
        *right_ptr = temp;
        left_ptr++;
        right_ptr--;
    }
}

void insertIntoSortedArray(int number , Array &arr){
    for(int i = 0 ; i < arr.size ; i++){
        if(number < *(arr.A + i)){
            my_insert(i, number, arr);
            break;
        }
    }
}

void negativeOnOneSide(Array &arr){
    int temp{};
    int current_position = 0;
    for(int i = 0 ; i< arr.size - 1 ; i++){
        if(*(arr.A + i) < 0){
            temp = *(arr.A + i);
            *(arr.A + i) = *(arr.A + current_position);
            *(arr.A + current_position) = temp;
            current_position++;
        }
    }
}

int main(int argc, const char * argv[]) {
    Array arr;
    cout << "Enter size of an array " << endl;
    cin >> arr.size;
    arr.A = new int[arr.size]; // new int[arr.size] returns the address of the first element of the array to the pointer
    arr.length = 0;
    int n;
    cout << "How many elements do you want to add? " << endl;
    cin >> n;
    int current_element{};
    cout << "Enter the numbers " << endl;
    for(int i = 0 ; i <n ; i++){
        cin >> current_element;
        *(arr.A + i) = current_element;
    }
    arr.length = n;
    cout << "=========" << endl;
    cout << "Displaying the array" << endl;
    
    display(arr);
    
//    cout << "Enter an element to be appended to the array" << endl;
//    cin >> current_element;
//    *(arr.A + n) = current_element;
    
    cout << "Displaying the array " << endl;
    cout << "=======================" << endl;
    
    display(arr);
    arr.length++;
//    my_insert(4, 15, arr);
    
    cout << "Displaying the array " << endl;
    cout << "=======================" << endl;
    display(arr);
    
//    my_delete(3, arr);
    cout << "Displaying the array " << endl;
    cout << "=======================" << endl;
    display(arr);
    int element_to_found{};
//    cout << "Which element do you want to find?" << endl;
//    cin >> element_to_found;
//    int index = linear_search(element_to_found, arr);
//    cout << index << endl;
//    cout << "Which element do you want to find?" << endl;
//    cin >> element_to_found;
//    index = linear_search(element_to_found, arr);
//    cout << index << endl;
    
    cout << "Which element do you want to find using binary search?" << endl;
    cin >> element_to_found;
    int index = my_binary_search(element_to_found, arr);
    cout << index << endl;
    cout << "Which element do you want to find using binary search?" << endl;
    cin >> element_to_found;
    index = my_binary_search(element_to_found, arr);
    cout << index << endl;
    
    cout << "Enter the index of the element which you want to get" << endl;
    int enter_index{};
    cin >> enter_index;
    int get_value_result = get_element(enter_index, arr);
    cout << get_value_result << endl;
    
    cout << "Finding the max element" << endl;
    cout << return_max(arr) << endl;
    
    cout << "Finding sum" << endl;
    cout << sum(arr) << endl;
//    cout << "Reversing an Array" << endl;
//    reverseArray(arr);
//    display(arr);
//    cout << "Left shifting an array" << endl;
//    left_shift(arr);
//    display(arr);
    
//    cout << "Rotating an array" << endl;
//    rotate_array(arr);
//    display(arr);
    
//    cout << "Inserting into sorted Array" << endl;
//    cout << "Which element do you want to insert" << endl;
//    int element{};
//    cin >> element;
//    insertIntoSortedArray(element, arr);
//    display(arr);
    
    cout << "Negative on one side" << endl;
    negativeOnOneSide(arr);
    display(arr);
    
}
