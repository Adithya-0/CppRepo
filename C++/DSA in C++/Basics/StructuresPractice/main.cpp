#include <iostream>
#include <vector>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
    char x; // It is easy for our machine to read 4 bytes at a time.
            // So for length its taking 4 bytes , breadth 4 bytes and for character also
            // it is allocating 4 bytes but it is using only 1 byte out of it
    // long y; // Will assign and use 8 bytes
};
struct Student {
    char name[25];
    int rollNo;
    char dept[10];
};
struct Rectangle r1; // global scope
int main(){
    struct Rectangle r2 = {10,5}; // local to main
    cout << sizeof r2 << endl; // 12
    cout << r2.length << endl;
    cout << r2.breadth << endl;
    r2.length = 15;
    r2.breadth = 10;
    cout << r2.length << endl;
    cout << r2.breadth << endl;
    return 0;
}