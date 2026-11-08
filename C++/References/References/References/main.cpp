//
//  main.cpp
//  References
//
//  Created by Adithya R on 07/11/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num {100};
    int &ref = num;
    cout << num << endl;
    cout << ref << endl;
    cout << "======================" << endl;
    num = 200; // ref is an alias to num, ie
    cout << num << endl;
    cout << ref << endl;
    cout << "======================" << endl;
    ref = 300;
    cout << num << endl;
    cout << ref << endl;
    
    
}
