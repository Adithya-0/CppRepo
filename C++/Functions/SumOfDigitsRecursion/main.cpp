#include <iostream>
using namespace std;
int sum_of_digits(int x);
int main(){
    cout << "Enter your desired number" << endl;
    int num{};
    cin >> num;
    if (num < 0) {
        cout << "Please enter a positive number" << endl;
    }else {
        int sum = sum_of_digits(num);
        cout << sum << endl;
    }
    
    
    
}

int sum_of_digits(int x){
    if ((x <= 1) ) {
        return x;
    }
    else  {
        return x + sum_of_digits(x-1);
    }
}