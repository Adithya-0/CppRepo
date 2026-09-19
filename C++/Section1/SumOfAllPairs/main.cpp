#include <iostream>
#include <vector>

using namespace std;

int main(){
    int result = 0;
    vector <int> vec = {2};
    for (int i = 0; i < vec.size() ; ++i){
        for (int j = i + 1 ; j < vec.size() ; ++j){
            result = result + (vec[i] * vec[j]);
        }
    
    
    }
    cout << result << endl;

    return 0;
}