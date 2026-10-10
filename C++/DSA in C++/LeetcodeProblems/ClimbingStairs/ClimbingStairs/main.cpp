#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

int calculate_if_parts_are_even(int w);

int main() {
    vector<vector<int>> matrix{};
    vector<int> groupSizes{3,3,3,3,3,1,3};
    for(int i = 0 ; i <groupSizes.size() ; i++){
        vector<int> vec (groupSizes[i]);
        matrix.push_back(vec);
    }
    
    

    
}

