#include <iostream>
using namespace std;
double save_a_penny(int n , double amount_to_begin_with = 0.01);
int main(){
    double amount_to_begin_wiht{};
    cin >> amount_to_begin_wiht;
    int num{};
    cin >> num;
    if((num > 0) && (amount_to_begin_wiht > 0)){
        cout << save_a_penny(num , amount_to_begin_wiht) << endl;
    } else {
        cout << "Enter a valid number" << endl;
    }
}

double save_a_penny(int n, double amount_to_begin_with){
    if (n == 1) {
        return amount_to_begin_with;
    }
    else {
        return 2 * save_a_penny(n-1 , amount_to_begin_with);
    }
}