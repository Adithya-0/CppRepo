//
//  main.cpp
//  2DArray
//
//  Created by Adithya R on 10/10/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num1 = 3;
    int num2 = 5;
    int num3 = 7;
    int *arr[3]; // --> Array of pointers
    arr[0] = &(num1);
    arr[1] = &(num2);
    arr[2] = &(num3);
    for (int i = 0 ; i < 3 ; i++){
        cout << *(arr[i]) << endl;
    }
    
    
    cout << "======" << endl;
    // Now ;
    arr[0] = new int[4];
    arr[1] = new int [4];
    arr[2] = new int [4];
    *(arr[1] + 2) = 3;
    
    cout << "=======" << endl;
    // Now;
    
    int **A; // A is a pointer
    A = new int*[3];
    *(A+0) = new int[4];
    *(A+1) = new int[4];
    *(A+2) = new int[4];
    *(*(A+1) + 2) = 15;
    
    
    
    
    
}
