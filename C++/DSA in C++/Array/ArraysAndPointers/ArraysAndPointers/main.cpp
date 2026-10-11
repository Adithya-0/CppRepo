//
//  main.cpp
//  ArraysAndPointers
//
//  Created by Adithya R on 11/10/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x[4][3] = {{2,4,6} , {10 , 12 , 14 } , {18,20,22} , {24,26,28}};
    int (*p)[3] = &(x[0]);
    // To access 20
    cout <<  (*(p + 2)) << endl;
    cout << p + 2 << endl;
    cout <<  (*(p + 2))[1] << endl;
    
    int *q = &(x[0][0]);
    // To access 20
    cout << *(q + 7) << endl;
    
}
