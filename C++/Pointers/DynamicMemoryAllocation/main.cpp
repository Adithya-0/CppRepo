#include <iostream>

using namespace std;

int main(){
    int *new_ptr {nullptr};
    new_ptr = new int;
    cout << *new_ptr << endl;
    cout << new_ptr << endl;
    *new_ptr = 100;
    cout << *new_ptr << endl;
    delete new_ptr;
    cout << new_ptr << endl;
    cout << *new_ptr << endl;
    cout << endl;
    cout << "----------" << endl;
    cout << endl;
    int *new_ptr2 {nullptr};
    new_ptr2 = new int;
    cout << new_ptr2 << endl;
    cout << *new_ptr2 << endl;


    cout << "=============================" << endl;
    cout << "Example 2" << endl;
    cout << "=============================" << endl;
    cout << endl;
    int num_of_elements {0};
    cout << "How many elements do you want in the array? " << endl;
    cin >> num_of_elements;

    double *array_ptr {nullptr};
    array_ptr = new double[num_of_elements];
    cout << array_ptr << endl;
    for (int i = 0 ; i < num_of_elements ; ++i){
        array_ptr[i] = i + 1;
    }
    for (int i = 0 ; i < num_of_elements ; i++){
        cout << array_ptr[i] << " ";
    }
    cout << endl;
    delete [] array_ptr;



    return 0;
}