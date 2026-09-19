#include <iostream>
using namespace std;
int fun(int n , int x);
double myPow(double x, int n);
int main(){
    int a = fun (5,0);
    cout << a << endl;
    double x;
    int n;
    cin >> x;
    cin >> n;
    double b = myPow( x , n);
    if (n < 0){
        b = 1/b;
    }
    cout << b << endl;
}

int fun(int n , int x){
    if (n>0){
        x++;
        return fun(n-1 , x) + x;
    }
    return 0;
}

double myPow(double x, int n){
    if (n == 0){
        return 1;
    }
    static double y = x;
    if (n==1 || n == -1){
        return x;
    }
    x = x * y;
    if (n > 0){
        return myPow(x , n-1);
    }else if (n < 0){
        return myPow(x , n + 1);
    }
    
    
}