//
//  main.cpp
//  MyString-start
//
//  Created by Adithya R on 08/11/26.
//

#include <iostream>
#include "Mystring.hpp"
int main(int argc, const char * argv[]) {
    Mystring empty;
    Mystring larry{"larry"};
    Mystring stooge {larry};
    
    empty.display();
    larry.display();
    stooge.display();
}


