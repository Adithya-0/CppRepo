#include <iostream>
#include <vector>

using namespace std;
void print(int);
void print(double);
void print(vector<int>);
void print(vector <double>);
int main(){
    vector <int> vec1 {1,2,4,5};
    vector <double> vec2 {20.5 , 10.7 , 5.9};
    print(23);
    print(24.50);
    print(vec1);
    print(vec2);
    print('A'); // characters are always promoted to int, Shouls print 65 ASCII ('A')
    return 0;
}

void print(int num){
    cout << "Printing num(int) " << num << endl;
}
void print(double num){
    cout << "Printing num(double) " << num << endl;
}
void print(vector <int> vec){
    cout << "Executing int vector" << endl;
    for (int i : vec){
        cout << i << " " ;
    }
    cout << endl;
}
void print(vector <double> vec){
    cout << "Executing double vector" << endl;
    for (double i : vec){
        cout << i << " ";
    }
    cout << endl;
}