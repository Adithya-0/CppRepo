#include <iostream>

using namespace std;

int main(){
    int total_amt = 100;
    int total_number = 8;
    double average = 0.0;
    average =  total_amt/total_number;  // average can hold a double, but since the division operation is
                                       // between 2 integers, the resulting answer given after the division
                                       // will be an integer which is 12.
    cout << "Average is " << average << endl;

    average = static_cast<double>(total_amt) / total_number; //The division operation is between a double
                                                            //and an integer. We know that the C++ compiler 
                                                            //will convert low to high, so int will be
                                                            //converted to double and the resulting
                                                            //type after division will be a double
    cout << "New average is " << average << endl;

    cout << "Enter 3 integers: " ;
    int int1 {0};
    int int2 {0};
    int int3 {0};
    cin >> int1 >> int2 >> int3;

    double avg_of_three_numbers {0};

    avg_of_three_numbers = (static_cast<double> (int1) + int2 + int3) / 3;
    cout << "Average of three numbers is " << avg_of_three_numbers << endl;

    cout << boolalpha;
    bool true_or_false = (9.9999999999999999999999999999 == 10.0);
    cout << true_or_false << endl;
}