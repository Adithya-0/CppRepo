#include <iostream>
using namespace std;
void print_array(int arr[] , size_t size);
void set_array(int arr[] , size_t size , int value);
int main(){
    int nums[] = {1,2,3,4,5};
    cout << nums << endl;
    print_array(nums , 5);
    set_array(nums , 5 , 7);
    print_array(nums , 5);
    return 0;
}

void print_array(const int arr[] , size_t size){
    for (int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void set_array(int arr[] , size_t size , int value){
    for (int i = 0 ; i < size; ++i){
        arr[i] = value;
    }
}