#include "iostream"
#include "string"
#include "cmath"
using namespace std;

int main(){
    vector<int> nums{7,8,6,9};
    vector <int> new_vec{};
    int greatest = nums[0];
    int smallest = nums[0];
    for (int i = 0 ; i < nums.size() ; i++){
        if(nums[i]>=greatest){
            greatest = nums[i];
        } if(nums[i] <= smallest){
            smallest = nums[i];
        }
    }
    for(int i = smallest ; i <=greatest ; i++){
        if(find(nums.begin() , nums.end() , i)  == nums.end()){
            new_vec.push_back(i);
        }
        
    }
    for (int i : new_vec){
        cout << i << endl;
    }
    
}
