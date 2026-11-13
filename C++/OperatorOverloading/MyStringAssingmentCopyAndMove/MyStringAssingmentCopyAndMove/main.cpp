//
//  main.cpp
//  MyStringAssingmentCopy
//
//  Created by Adithya R on 08/11/26.
//

#include <iostream>
#include "Mystring.hpp"
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    Mystring a {"Hi"};
    Mystring b; // No args constructor gets called
    b = a; // Copy = operator method will be called
    b = "This is a test"; // Move = operator method will be called
    b.display();
    Mystring c;
    c = Mystring("Adithya"); // Here, a temporary object whose str value is "Adithya" will be created
                             // And since this is a temporary object, the move assignment operator method will be called and not the copy assignment operator method.
    
    Mystring empty;
    Mystring larry{"Larry"};
    Mystring stooge {larry};
    Mystring stooges;
    empty = stooge;
    empty.display();
    larry.display();
    stooge.display();
    stooges.display();
    
    stooges = "Larry Moe and Curly";
    stooges.display();
    vector <Mystring> stooges_vec{};
    stooges_vec.push_back("Larry"); // Now, the move constructor will be called here
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    cout << "=======================Loop 1 =======================" <<endl;
    for (const Mystring &s : stooges_vec){
        s.display();
    }
    for (Mystring &s : stooges_vec){
        s = "Changed";
    }
    
    for (const Mystring &s : stooges_vec){
        s.display();
    }
       
    
}
