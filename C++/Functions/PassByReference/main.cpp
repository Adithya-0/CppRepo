#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


void pass_by_ref1(int &num);
void pass_by_ref3(vector<int> &v);
void print_vector(const vector<int> &v);

void pass_by_ref1(int &num){
    num = 1000;
}
void pass_by_ref3(vector<int> &v){
    v.clear();
    v.push_back(1);
}
void print_vector(const vector<int> &v){
    for (int i : v){
        cout << i << " ";
    }
    cout << endl;

}
int main(){
    int num = 10;
    int another_num = 20;
    vector<int> vec {1,2,3,4,5};
    cout << "num Before pass by reference: " << num << endl;
    pass_by_ref1(num);
    cout << "num After pass by refernece: " << num << endl;
    cout << "another_num Before pass by reference: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num After pass by reference: " << another_num << endl;
    cout << "Vector vec before pass by reference" << endl;
    print_vector(vec);
    pass_by_ref3(vec);
    cout << "Vector vec after pass by reference" << endl;
    print_vector(vec);
}