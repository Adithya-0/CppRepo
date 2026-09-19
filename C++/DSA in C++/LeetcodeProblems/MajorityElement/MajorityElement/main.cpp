#include "iostream"
#include "vector"
using namespace std;
void moveZeroes (vector<int> &vec);
int main(){
    vector <int> vec = {0,1,0,2 ,3 ,0};
    moveZeroes(vec);
    for (int i : vec){
        cout << i << " ";
    }
    cout << endl;
}

void moveZeroes (vector<int> &nums){
    if(nums.size() == 0){
        return;
    }
    int zero_ctr{};
    int *reader = &(nums[0]);
    int *end_ptr = reader + nums.size() - 1;
    int *writer = &(nums[0]);
    while (reader <= end_ptr){
        if (*reader == 0){
            if (reader == end_ptr){
                zero_ctr++;
                break;
            }
            reader++;
            zero_ctr++;
        } else {
            *writer = *reader;
            writer++;
            reader++;
        }
    }
    while (writer <= end_ptr){
        *writer = 0;
        writer++;
    }
    if(nums.size() == zero_ctr){
        return;
    }
//    for (int i = static_cast <int> (nums.size())-1 ; i >= (nums.size() - zero_ctr) ; i--){
//        nums[i] = 0;
//    }

    }
   
