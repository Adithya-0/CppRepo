#include "iostream";
using namespace std;
void fun(int n);
int main() {
    fun(3);
    cout << endl;
}

void fun(int n){
    if (n > 0){
        cout << n << " ";
        fun(n-1);
        fun(n-1);
    }
}
