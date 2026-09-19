#include <iostream>
using namespace std;
int calcArea(struct Rectangle r1);
void changeLength(struct Rectangle *r , int new_length);
void fun_with_struct2(struct Test *t);
struct Rectangle* returnDynamicStruct();
struct Rectangle{
    int length;
    int breath;
};
struct Test {
    int marks_out_of_hundred[4];
    int x;
};
int main(){
    struct Rectangle r{10,5};
    int area = calcArea(r);
    cout << area << endl;
    struct Rectangle *ptr = &r;
    changeLength(ptr , 20);
    cout << r.length << endl;

    cout << "----------------" << endl;

    struct Test t {{70,80,90,95} , 5};
    cout << t.marks_out_of_hundred[0] << endl;
    struct Test *ptr2 = &t;
    fun_with_struct2(ptr2);
    cout << t.marks_out_of_hundred[0] << endl;
    cout << "----------------------" << endl;
    struct Rectangle *ptr_to_dynamic_struct = returnDynamicStruct();
    cout << (*ptr_to_dynamic_struct).length << endl;
    cout << (*ptr_to_dynamic_struct).breath << endl;

    delete ptr_to_dynamic_struct;
}

int calcArea(struct Rectangle r1){
    return r1.length * r1.breath;
}

void changeLength(struct Rectangle *r , int new_length){
    (*r).length = new_length;
}

void fun_with_struct(struct Test t){
    t.marks_out_of_hundred[0] = 10;
}

void fun_with_struct2(struct Test *t){
    (*t).marks_out_of_hundred[0] = 30;
}

struct Rectangle* returnDynamicStruct(){
    struct Rectangle *p;
    p = new struct Rectangle;
    (*p).length = 1000;
    (*p).breath = 5000;
    return p;
}