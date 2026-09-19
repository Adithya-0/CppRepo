#include "iostream"
using namespace std;
void funA(int n);
void funB(int m);
int main(){
    funA(20);
}

void funA(int n){
    if (n > 0){
        cout << n << " ";
        funB(n-1);
    }
}

void funB(int m) {
    if(m > 1){
        cout << m << " ";
        funA(m/2);
    }
}
