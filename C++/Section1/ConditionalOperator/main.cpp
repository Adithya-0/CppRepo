#include <iostream>
using namespace std;

int main(){
    // int num{};
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl; 
    int num1{};
    int num2{};
    cout << "Enter 2 numbers: " ;
    cin >> num1 >> num2;
    cout << "The greater of the 2 is " << ((num1 > num2) ? num1 : num2) << endl;
    cout << "The lesser of the 2 is " << ((num1 < num2) ? num1 : num2) << endl;
    vector <int> vec {10,20};
    cout << vec.size() << endl;
    return 0;
}