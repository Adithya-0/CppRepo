#include <iostream>
#include <vector>
using namespace std;
void display_menu();
void add_number(vector <int> &vec , int x);
void print_numbers(const vector <int> &vec);
double display_mean(const vector <int> &vec);
int display_smallest(const vector <int> &vec);
int main(){
    vector<int> vec{};
    double mean{};
    int smallest{};
    char input{};
    int add_num{};

     while ((input != 'Q') && (input != 'q')) {
        display_menu();
        cin >> input;
        if ((input == 'Q') || (input == 'q') ){
            break;
        }else if ((input == 'P') || (input == 'p')){
            print_numbers(vec);
        }  
        else if ((input == 'A') || (input == 'a')){
            cout << "Enter a number to be added: ";
            cin >> add_num;
            add_number(vec , add_num);
            cout << add_num << " added." << endl;

        }
        else if ((input == 'M') || (input == 'm')){
            if (vec.size() == 0 ){
                cout << "No data.";
            }
            else {
                mean = display_mean(vec);
                cout << "The mean is: " << mean << endl;
            }
            
        }
        else if ((input == 'S') || input == 's'){
            if (vec.size() == 0){
                cout << "No data.";
            }
            else {
                smallest = display_smallest(vec);
                cout << "The smallest number is: " << smallest << endl;
            }
        } else {
            cout << "Enter a valid letter." << endl;
        }
     }

}

void display_menu(){
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "Q - Quit" << endl;
}
void add_number(vector <int> &vec , int x){
    vec.push_back(x);
}
void print_numbers(const vector <int> &vec){
    for (int i : vec){
        cout << i << " ";
    }
    cout << endl;
}

double display_mean(const vector <int> &vec){
    int sum = 0;
    for (int i : vec){
        sum = sum + i;
    }
    return static_cast<double>(sum) / vec.size();
}

int display_smallest(const vector <int> &vec){
    int smallest = vec[0];
    for (int i : vec){
        if (i < smallest){
            smallest = i;
        }
    }
    return smallest;
}