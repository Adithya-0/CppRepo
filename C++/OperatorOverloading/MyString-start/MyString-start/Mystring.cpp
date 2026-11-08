//
//  Mystring.cpp
//  MyString-start
//
//  Created by Adithya R on 08/11/26.
//

#include "Mystring.hpp"
#include <iostream>
#include <cstring>

Mystring::Mystring(){
    str = nullptr; // initiliaze
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s){ // This constructor gets called when we create an object like this
    //--> Mystring a("Hello") --> Here Hello is a C style string
    str = nullptr;
    if(s == nullptr){
        str = new char[1];
        *str = '\0'; //--> This '\0' is called the null terminator
        
    }else{
        str = new char[strlen(s)+1]; // We are doing the +1, because when we do strcpy it adds an extra char '\0' ie the null terminator
        strcpy(str,s);
    }
    
}
Mystring::Mystring(const Mystring &source){ // Deep copy
    str = nullptr;
    str = new char[strlen(source.str) + 1];
    strcpy(str,source.str);
}
Mystring::~Mystring(){
    delete [] str;
}

void Mystring::display() const{
    std::cout << str << " : " << get_length() << std::endl;
}
int Mystring::get_length() const{
    return strlen(str);
}

const char* Mystring::get_str() const{
    return str;
}

