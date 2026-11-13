#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <set>

using namespace std;

void solve();

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

void solve(){
    
    
    int n{};
    cin >> n;
    vector<int> nums{};
    set<int>s1{};
    int current_num{};
    int k{};
    for(int i = 1 ; i <= n ; i++){
        cin>>current_num;
        nums.push_back(current_num);
        s1.insert(current_num);
    }
    k = s1.size();
    for(const auto &num : s1){
        if(count(nums.begin() , nums.end() , num) >= 2 ){
            k = k+1;
        }
    }
    sort(nums.begin() , nums.begin() + (nums.size())/2);
    sort(nums.begin() + (nums.size()/2) , nums.end() , greater<int>());
    cout << "YES";
    
    
    
    
}
