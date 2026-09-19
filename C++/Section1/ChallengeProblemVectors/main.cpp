#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "First element is " << vector1.at(0) << endl;
    cout << "Second element is " << vector1.at(1) << endl;
    cout << "Size is " << vector1.size() << endl;
    vector1.push_back(30);
    cout << "New size is " << vector1.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    cout << "=======================" << endl;

    vector1.at(0) = 1000;
    vector_2d.push_back(vector1);
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    cout << vector_2d.at(2).at(0) << endl;
    cout << vector_2d.at(2).at(1) << endl;

    cout << "Elements in vector1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    int numbers1[1];
    cout << numbers1[1] << endl;
    vector <int> my_vector(2,10);
    cout << my_vector[1] << endl;
    
}