//
//  main.cpp
//  FindKClosestElements
//
//  Created by Adithya R on 11/11/26.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> arr{1,1,2,3,4,5};
    vector<int> output{};
    int k = 4;
    int x = -1;
    int i = 0;
    int j = arr.size() - 1;
    while(j-i + 1 > k){
        if(abs(arr[i] -x) > abs(arr[j] - x)){
            i++;
        } else if(abs(arr[i] - x) <= abs(arr[j] - x)){
            j--;
        }
    }
    for(int k = i ; k <= j ; k++){
        output.push_back(arr[k]);
    }
    
    cout << "YES" << endl;
}
