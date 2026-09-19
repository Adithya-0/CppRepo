#include <iostream>
using namespace std;
int fibonacci(int x);
int main(){
    int num = 10;
    int fib_num = fibonacci(num);
    cout << fib_num << endl;
}

int fibonacci(int x){
    if (x <= 1){
        return x;
    }
    else {
        return fibonacci(x-1) + fibonacci(x-2);
    }
}