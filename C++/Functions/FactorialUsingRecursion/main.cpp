#include <iostream>
using namespace std;
int factorial(int x);
int main(){
    int num{};
    cout << " Enter the number you want" << endl;
    cin >> num;
    cout << "The factorial of " << num <<  " is " << factorial(num) << endl;     
}

int factorial(int x){
    if (x == 0) {
        return 1;
    }
    else {
        return x * factorial(x-1);
    }
}