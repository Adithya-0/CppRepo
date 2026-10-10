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
    int (*wrong_way)[5] = &(arr);
     // this will push the pointer by 5*4 = 20 bytes (assuming each int takes 4 bytes)
    // this is because the pointer is pointing to an array
    int *correct_way = &(arr[0]);
    // this pointer is pointing at an Int not at an array
    cout << *(correct_way + 1) << endl;
    
}
