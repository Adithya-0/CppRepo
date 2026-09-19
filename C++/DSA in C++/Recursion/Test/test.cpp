#include <iostream>
using namespace std;

int main(){
    int **ptr;
    int num1 = 10;
    int *ptr1;
    ptr1 = &(num1);
    ptr = &(ptr1);
    cout << *ptr << endl;
}