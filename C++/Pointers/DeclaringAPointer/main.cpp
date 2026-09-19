#include <iostream>
using namespace std;

int main(){
    // int *int_ptr;
    // cout << "int_ptr is " << int_ptr << endl;
    // int *int_ptr2 {nullptr};
    // cout << "int_ptr2 is " << int_ptr2 << endl;

    int *p;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "Size of p is " << sizeof p << endl;
    p = nullptr;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    int num = 10;
    cout << "Size of num is " << sizeof num << endl;
    cout << "Address of num is " << &num << endl;

    cout << "===============================" << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<int> *p4 {nullptr};

    cout << "Size of p1 is " << sizeof p1 << endl;
    cout << "Size of p2 is " << sizeof p2 << endl;
    cout << "Size of p3 is " << sizeof p3 << endl;
    cout << "Size of p4 is " << sizeof p4 << endl;

}