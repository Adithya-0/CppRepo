#include <iostream>

using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main(){
    struct Rectangle *p;
    p = new struct Rectangle; 
    // p is on the stack
    // the address is stored in p. This address is from the heap, 
    // because the new object is created on the heap.
    cout << sizeof (*p) << endl;
    (*p).length = 10;
    (*p).breadth = 5;
    delete p;
    struct Rectangle r1;
    struct Rectangle *ptr = &r1;
    (*ptr).length = 20;
    (*ptr).breadth = 100;
    cout << r1.length << endl;
    return 0;
}