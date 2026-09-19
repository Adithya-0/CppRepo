#include <iostream>
#include <string>
using namespace std;
int main(){
    int score {100};
    int *score_ptr = &score;
    cout << "Address of score_ptr is " << &score_ptr << endl;
    cout << "Address of score is " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << ". This is the address at which the variable score is located" << endl;
    cout << "Value of score is " << *score_ptr << endl;
    *score_ptr = 200;
    cout << "New value of score is " << score << endl;
    score = 300;
    cout << "New value of score is " << *score_ptr << endl;
    cout << endl;
    cout << "======================================" << endl;
    cout << "Example 2: " << endl;
    cout << endl;

    double high_temp {100.7};
    double low_temp {37.5};
    double *temp_ptr {&high_temp};
    cout << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;

    cout << endl;
    cout << "-----------" << endl;

    vector <string> stooges {"Larry" , "Moe" , "Curly"};
    vector<string> *vector_ptr{nullptr};
    vector_ptr = &stooges;
    cout << &vector_ptr << endl;
    cout << vector_ptr << endl;
    cout << (*vector_ptr).at(0) << endl; // Larry
    cout << "Stooges: " << endl;
    for (string stooge : (*vector_ptr)){
        cout << stooge << " ";
    }

    cout << endl;
    string *vector_ptr_0 {nullptr};
    string *vector_ptr_1 {nullptr};
    vector_ptr_0 = &(stooges.at(0));
    vector_ptr_1 = stooges.data();
    cout << *vector_ptr_0 << endl; //Larry
    cout << *vector_ptr_1 << endl; // Larry
    cout << &(stooges.at(0)) << endl;
    cout << &(stooges.at(1)) << endl;
    cout << &(stooges.at(2)) << endl;

    //4,307,180,128 , 4,307,180,152 , 4,307,180,176  --> Strings usually take 24 bytes of memory
    //4,344,322,880 , 4,344,322,904 , 4,344,322,928
    cout << vector_ptr_0 << endl;
    cout << vector_ptr_0 + 1 << endl;
    cout << vector_ptr_0 + 2 << endl;
    cout << *vector_ptr_0 << endl;
    cout << *(vector_ptr_0 + 1) << endl;
    cout << *(vector_ptr_0 + 2) << endl;


    return 0;
}