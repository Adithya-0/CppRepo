#include <iostream>
using namespace std;
void double_value(int *int_ptr);
int main(){
    int value = 45;
    int *value_ptr = &value;
    double_value(&value);
    cout << value << endl;
    double_value(value_ptr);
    cout << value << endl;
    return 0;
}

void double_value(int *int_ptr){
    *int_ptr = (*int_ptr) * 2;
}