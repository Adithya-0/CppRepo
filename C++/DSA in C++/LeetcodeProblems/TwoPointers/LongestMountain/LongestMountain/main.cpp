//
//  main.cpp
//  LongestMountain
//
//  Created by Adithya R on 10/11/26.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> arr{2,1,4,7,3,2,5};
    int i = 0;
    int j = arr.size() - 1;
    int prev_i{};
    int prev_j{};
    while(i < j){
        if(arr[i] >= arr[i+1]){
            prev_i = i;
            i++;
    }
        else if(arr[j] <= arr[j-1]){
            prev_j = j;
            j--;
        }
        
        if(prev_i == i and prev_j == j){
            break;
        }
        
    }
    cout << j-i << endl;
}
