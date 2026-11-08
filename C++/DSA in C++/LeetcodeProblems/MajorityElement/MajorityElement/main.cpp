#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>

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

unsigned long long calculateSn(unsigned long long n) {

    unsigned long long interior = (n * n) - (3 * n) + 8;
    return (n * interior) / 6;
}

unsigned long long findNFromHugeSum(unsigned long long targetSn) {
    unsigned long long low = 1;
    unsigned long long high = 3000000000ULL; // Safe upper bound for cubic root of 6 * 10^18
    unsigned long long ans = 0;

    while (low <= high) {
        unsigned long long mid = low + (high - low) / 2;
        unsigned long long currentSn = calculateSn(mid);

        if (currentSn <= targetSn) {
            ans = mid;        // This is the largest 'n' where the sum is <= targetSn
            low = mid + 1;    // Try to find if it exactly matches or goes closer
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

