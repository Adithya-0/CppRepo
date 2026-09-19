#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec{};
    int largest{};
    int smallest{};
    char input{};
    int add_num{};
    int sum{};

    while ((input != 'Q') && (input != 'q')) {
       
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> input;
        if ((input == 'Q') || (input == 'q')){
            break;
        }
        
        if ((input == 'P') || (input == 'p')) {
            if (vec.size() == 0) {
                cout << "The list is empty" << endl;
                continue;
            }
            for (int n : vec) {
                cout << n << ' ';
            }
            cout << endl; // Added for a clean line break after printing
            continue;
        } 
        else if ((input == 'A') || (input == 'a')) {
            cout << "Enter an integer to be added: ";
            cin >> add_num;
            vec.push_back(add_num);
            cout << add_num << " added" << endl;
            continue;
        } 
        else if ((input == 'M') || (input == 'm')) {
            sum = 0;
            if (vec.size() == 0) {
                cout << "Unable to calculate mean - no data" << endl;
                continue;
            }
            for (int i : vec) {
                sum = sum + i;
            }
            cout << "Mean is " << static_cast<double>(sum) / vec.size() << endl;
        } 
        else if ((input == 'S') || (input == 's')) { // Fixed lowercase 's' match for consistency
            if (vec.size() == 0) {
                cout << "Unable to calculate smallest - no data" << endl;
                continue;
            }
            smallest = vec[0];
            for (int i : vec) {
                if (i < smallest) {
                    smallest = i;
                }
            }
            cout << "Smallest is " << smallest << endl;
        }
        else if ((input == 'L') || (input == 'l')){
            if (vec.size() == 0) {
                cout << "Unable to calculate largest - no data" << endl;
                continue;
            }
            largest = vec[0];
            for (int i : vec) {
                if (i > largest) {
                    largest = i;
                }
            }
            cout << "Largest is " << largest << endl;

        }
        else{
            cout << "Enter a valid letter" << endl;
        }
    }

    return 0;
}
