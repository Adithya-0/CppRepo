//
//  main.cpp
//  ArrayADTBasics
//
//  Created by Adithya R on 11/10/26.
//

#include <iostream>
using namespace std;
struct Array{
    int *A;
    int size;
    int length; // ---> How many variables are currently in the array
};
void my_insert(int index , int value , Array arr){
    if(index < arr.size and index < arr.length){
        for(int i = arr.length ; i>=index ; i--){
            *(arr.A + i) = *(arr.A + i -1);
        }
        *(arr.A + index) = value;
        arr.length++;
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
    
    for(int i = 0 ; i < arr.size ; i++){
        cout << *(arr.A + i) << endl;
    }
    
    cout << "Enter an element to be appended to the array" << endl;
    cin >> current_element;
    *(arr.A + n) = current_element;
    
    cout << "Displaying the array " << endl;
    cout << "=======================" << endl;
    
    for(int i = 0 ; i < arr.size ; i++){
        cout << *(arr.A + i) << endl;
    }
    arr.length++;
    my_insert(4, 15, arr);
    
    cout << "====================" << endl;
    for(int i = 0 ; i < arr.size ; i++){
        cout << *(arr.A + i) << endl;
    }
}
