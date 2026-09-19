#include <iostream>

using namespace std;
void local_example(int x);
void global_example();
void static_local_example();
int num {300};
int main(){
    int num{100};
    int num1 {500};

    cout << "Local num is " << num << " in main" << endl;

    { // creates a new level of scope
        int num {200};
        cout << "Local num is " << num << " in inner block" << endl;
        cout << "Inner block in main can see outside. num1 is " << num1 << endl;
    }
    cout << "Local num is: " << num << " in main" << endl;
    cout << endl;
    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    
}

void local_example(int x){
    int num {1000};
    cout << "Local num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
    cout << endl;
}

void global_example(){
    cout << "Global num is: " << num << " in global_example - start" << endl;
    num = num * 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
    cout << endl;
}

void static_local_example(){
    static int num {5000};
    cout << "Local static num is: " << num << " in static_local_example - start" << endl;
    num = num + 1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
    cout << endl;
}