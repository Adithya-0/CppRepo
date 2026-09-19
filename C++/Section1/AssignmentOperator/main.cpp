#include <iostream>

using namespace std;

int main(){
    int num1 = 10; // initialization
    int num2 = 20; // initialization

    num1 = 100; // assignment

    cout << "Num1 is " << num1 << endl;
    cout << "Num2 is " << num2 << endl;

    float result {0};
    result = num2/num1;
    cout << "Result is " << result << endl;

    /**************************************Euros TO Dollars**********************************************************/
    cout << "=========" << endl;
    cout << "Euros to Dollars" << endl;
    cout << "1 Euro = 1.19 USD" << endl;

    cout << "Enter a vaue (in euros)" << endl;
    double input {0};
    cin >> input;
    cout << "Amount in Dollars is " << 1.19 * input << endl;

    int test_num1 = 4;
    int& test_num2 = test_num1;
    test_num1 = 12;
    cout << "Test num1 is " << test_num1 << endl;
    cout << "Test num2 is " << test_num2 << endl;

    return 0;
}