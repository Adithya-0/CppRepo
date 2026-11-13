//
//  main.cpp
//  ContainerWithMostWater
//
//  Created by Adithya R on 10/11/26.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> height{2,3,4,5,18,17,6};
    int i = 0;
    int j = height.size() - 1;
    int current_prod{};
    int max_prod{};
    while(i <= j){
        current_prod = min(height[i] , height[j]) * (j-i);
        if(current_prod > max_prod){
            max_prod = current_prod;
        }
        if(height[i] > height[j]){
            j--;
            
        } else{
            i++;
        }
        
        
    }
    cout << max_prod << endl;
   
    

}
