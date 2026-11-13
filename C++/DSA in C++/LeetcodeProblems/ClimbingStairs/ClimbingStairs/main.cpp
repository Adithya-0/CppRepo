#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <cctype>
#include <string_view>
#include <string>
#include <ranges>
#include <string_view>
#include <unordered_set>
#include <set>
using namespace std;
int main() {
    int score{};
    string password = "bbB11#";
    vector<char> seen{};
    for(int i = 0 ; i < password.size() ; i++){
        if(static_cast<int>(password[i]) >= 97 and static_cast<int>(password[i]) <= 122 and (find(seen.begin() , seen.end() , password[i]))==seen.end()){
            score = score + 1;
            seen.push_back(password[i]);
        } else if(static_cast<int>(password[i]) >= 65 and static_cast<int>(password[i]) <= 90 and (find(seen.begin() , seen.end() , password[i]))==seen.end()){
            score = score + 2;
            seen.push_back(password[i]);
        } else if(static_cast<int>(password[i]) >= 48 and static_cast<int>(password[i]) <= 57 and (find(seen.begin() , seen.end() , password[i]))==seen.end()){
            score = score + 3;
            seen.push_back(password[i]);
        } else if((find(seen.begin() , seen.end() , password[i]))==seen.end()){
            score = score + 5;
            seen.push_back(password[i]);
        }
    }
    cout << score << endl;
    
}
