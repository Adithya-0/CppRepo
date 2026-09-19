#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


void pass_by_value1(int num);
void pass_by_value3(vector<int> v);
void print_vector(vector<int> v);

void pass_by_value1(int num){
    num = 1000;
}
void pass_by_value3(vector<int> v){
    v.clear();
    v.push_back(1);
    cout << "Formal Parameter vector 'v' after clearing: " << endl;
    print_vector(v);
}
void print_vector(vector<int> v){
    for (int i : v){
        cout << i << " ";
    }
    cout << endl;

}
int main(){
    int num = 10;
    int another_num = 20;
    vector<int> vec {1,2,3,4,5};
    cout << "num Before pass by value: " << num << endl;
    pass_by_value1(num);
    cout << "num After pass by value: " << num << endl;
    cout << "another_num Before pass by value: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num After pass by value: " << another_num << endl;
    cout << "Vector vec before pass by value" << endl;
    print_vector(vec);
    pass_by_value3(vec);
    cout << "Vector vec after pass by value" << endl;
    print_vector(vec);
}