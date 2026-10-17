#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void solve();
int gcd(int num1 , int num2);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}

void solve() {
    int count{};
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<=i;j++ ){
            if(j < i){
                if(gcd(i, j) == abs(i-j)){
                    count++;
                }
            }
            
        }
    }
    cout << count << "\n";
}

int gcd(int num1 , int num2){
    int gcd{};
    for(int i = 1 ; i <= min(num1,num2) ; i++){
        if(num1 % i == 0 and num2 % i ==0){
            gcd = i;
        }
    }
    return gcd;
}
