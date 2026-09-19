#include "iostream"
using namespace std;
int sum(int x , int sum_i = 0);
int main(){
    int a = sum(12);
    cout << a << endl;
}

int sum(int x , int sum_i){
    sum_i = sum_i + x;
    if(x == 0){
        return sum_i;
    }
    return sum(x-1 , sum_i);
    
}
