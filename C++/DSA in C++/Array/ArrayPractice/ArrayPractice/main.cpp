//
//  main.cpp
//  ArrayPractice
//
//  Created by Adithya R on 09/10/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[5] = {20,40,60,80,100};
    int (*wrong_way)[5] = &(arr); // --> Pointer to an array
     // this will push the pointer by 5*4 = 20 bytes (assuming each int takes 4 bytes)
    // this is because the pointer is pointing to an array
    int *correct_way = &(arr[0]);
    // this pointer is pointing at an Int not at an array
    cout << *(correct_way + 1) << endl;
    
    //To show that the memory addresses of an array is contiguos
    cout << "===========" << endl;
    for(int i = 0 ; i < 5 ; i ++){
        cout << &(arr[i]) << endl;
    }
    
    int *p;
    p = new int [5];
    for(int i = 0 ; i < 5 ; i ++){
        *(p + i) = (i+1)*10;
    }
    cout << *(p + 3) << endl;
    
    
    cout << "=============" << endl;
    
    int *q = new int [10];
    for(int i = 0 ; i < 5 ; i++){
        *(q + i) = *(p+i);
    }
 
    delete [] p;
    p = q;
    q = nullptr;
    for(int i = 0 ; i < 10 ; i++){
        cout << *(p + i) << endl;
    }
    
    
    
}
