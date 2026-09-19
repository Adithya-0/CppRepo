#include <iostream>
using namespace std;

int main(){
    int scores [] {100, 99, 98};
    cout << scores << endl;
    cout << *scores << endl;
    int *score_ptr = scores; 
    cout << score_ptr << endl;
    cout << *score_ptr << endl;

    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    cout << endl;
    cout << "------------------" << endl;
    cout << endl;

    cout << score_ptr << endl; // 6,103,476,984. We are not adding 1 to the pointer, we are adding the size of one integer(which is 4 bytes) to the pointer
    cout << (score_ptr + 1) << endl; // 6,103,476,988
    cout << (score_ptr + 2) << endl; // 6,103,476,992

    cout << *score_ptr << endl; 
    cout << *(score_ptr + 1) << endl; 
    cout << *(score_ptr + 2) << endl; 

    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    return 0;
}