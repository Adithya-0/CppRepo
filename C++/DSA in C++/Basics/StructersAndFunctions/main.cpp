#include <iostream>
using namespace std;
void initialize(struct Rectangle *r , int l , int b);
int area(const struct Rectangle *r);
void changeLength(struct Rectangle *r , int new_length);
struct Rectangle {
    int length;
    int breadth;
};

int main(){
    struct Rectangle r;
    struct Rectangle *ptr = &r;
    initialize(ptr , 10 , 20);
    int area_of_rect = area(ptr);
    cout << area_of_rect << endl;
    changeLength(ptr , 20);
    area_of_rect = area(ptr);
    cout << area_of_rect << endl;
}

void initialize(struct Rectangle *r , int l , int b){
    (*r).length = l;
    (*r).breadth = b;
}

int area(const struct Rectangle *r){
    return ((*r).length )* ((*r).breadth);
}

void changeLength(struct Rectangle *r , int new_length){
    (*r).length = new_length;
}