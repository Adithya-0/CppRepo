#include "iostream"
#include "vector"
using namespace std;
void solve() ;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int a;
    vector<int> vec{};
    int num{};
    for (int i = 0; i < n ; i++){
        cin >> a;
        vec.push_back(a);
    }
    for(int i = 0 ; i < n -1 ; i++){
        if(vec[i] != vec[i+1] - 1){
            num++;
        }
    }
    cout <<  num << endl;
}
   
