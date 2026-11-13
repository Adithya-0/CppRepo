//
//  Mystring.hpp
//  MyStringAssingmentCopy
//
//  Created by Adithya R on 08/11/26.
//

#ifndef Mystring_hpp
#define Mystring_hpp

#include <stdio.h>
class Mystring{
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source); // Move constructor
    ~Mystring();
    void display() const; // Guarantees that executing this method will not modify any member attributes of the class.
    int get_length() const;
    const char *get_str() const; // Const at the beginning --> What it does: Applies to the return type of the function. It means the function returns a pointer to a read-only (constant) C-style string.
//    Effect: The caller cannot use this pointer to modify the underlying character data.
    Mystring& operator=(const Mystring &rhs);
    Mystring& operator=(Mystring &&rhs); //-> Move assigment operator
    Mystring operator-();
    Mystring operator+(const Mystring &rhs);
};
#endif /* Mystring_hpp */
