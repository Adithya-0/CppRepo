#include <iostream>
using namespace std;
void swapValues(int *ptr1 , int *ptr2);

int main(){
    int a = 10;
    int b = 5;
    int *a_ptr = &a;
    int *b_ptr = &b;
    swapValues(a_ptr , b_ptr);
    cout << a << endl;
    cout << b << endl;
    return 0;
}

void swapValues(int *ptr1 , int *ptr2){
    int num = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = num;
}