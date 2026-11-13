//
//  main.cpp
//  Boats to save people
//
//  Created by Adithya R on 10/11/26.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> people{3,5,3,4};
    int limit=5;
    sort(people.begin() , people.end());
    int i = 0;
    int j = people.size() - 1;
    int current_sum{};
    int pairs{};
    while(i<j){
        current_sum = people[i] + people[j];
        if (current_sum <= limit){
            pairs++;
            i++;
            j--;
        }
        else if(current_sum > limit){
            j--;
        }
    }
    cout << pairs + (people.size() - 2*pairs);
}
