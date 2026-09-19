#include <iostream>
using namespace std;
void ulta(int *a , int *b);
void ulta_by_ref(int &a , int &b);
int* returnArray(int size);
int main(){
    int num1 = 13;
    int num2 = 22;
    int *ptr_num1 = &num1;
    int *ptr_num2 = &num2;
    ulta(ptr_num1 , ptr_num2);
    cout << num1 << endl;
    cout << num2 << endl;
    int num3 = 40;
    int num4 = 60;
    ulta_by_ref(num3 , num4);
    cout << num3 << endl;
    cout << num4 << endl;
    int integers[] {1,2,3,4,5};



    int *a = returnArray(7);
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;
    cout << a[5] << endl;
    cout << a[6] << endl;
    delete[] a;


}


void ulta(int *a , int *b){
    int temp{};
    temp = *a;
    *a = *b;
    *b = temp;
}

void ulta_by_ref(int &a , int &b){
    int temp{};
    temp = a;
    a = b;
    b = temp;
}

int* returnArray(int size){
    int *p = new int[size];
    int *cached_ptr = p;
    int *end_ptr = p + size - 1;
    int i =1;
    while (p <= end_ptr){
        *p = i;
        p++;
        i++;
    }
    return cached_ptr;
}