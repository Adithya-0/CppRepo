//
//  main.cpp
//  OperatorOverloadingAsGlobal
//
//  Created by Adithya R on 08/11/26.
//

#include <iostream>
#include "MyString.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly ;
    cout << "Enter the name of the 3rd stooge" << endl;
    cin >> curly;
    cout << larry << " " << moe << " " << curly << " " << endl;
}
