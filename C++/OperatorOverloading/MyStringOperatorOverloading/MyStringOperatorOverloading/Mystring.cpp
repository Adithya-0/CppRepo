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
    std::cout << "Copy constructor called" << std::endl;
    str = nullptr;
    str = new char[strlen(source.str) + 1];
    strcpy(str,source.str);
}
Mystring::~Mystring(){
    delete [] str;
}
Mystring::Mystring(Mystring &&source){
    std::cout << "Move constructor called" << std::endl;
    str = nullptr;
    str = source.str;
    source.str = nullptr;
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

Mystring& Mystring::operator=(const Mystring &rhs){
    std::cout << "Copy assignemnt" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

Mystring& Mystring::operator=(Mystring &&rhs){
    std::cout << "Move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
    
}

Mystring Mystring::operator-(){
    char* new_str = new char[strlen(str) + 1];
    strcpy(new_str, str);
    for(int i = 0 ; i < strlen(new_str) ; i++){
        new_str[i] = std::tolower(new_str[i]);
    }
    Mystring temp {new_str};
    delete [] new_str;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs){
    char* resultant_string = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(resultant_string , str);
    strcat(resultant_string , rhs.str);
    Mystring temp {resultant_string};
    delete [] resultant_string;
    return temp;
}



