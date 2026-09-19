#include <iostream>
using namespace std;
int main(){
    cout << "Number of small rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    cout << "Number of large rooms: ";
    int number_of_large_rooms;
    cin >> number_of_large_rooms;
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms* price_per_large_room) << endl;
    const double tax = 0.06;
    cout << "Tax: $" <<  tax * ((number_of_small_rooms * price_per_small_room) + (number_of_large_rooms* price_per_large_room))  << endl;
    cout <<"===================" << endl;
    cout << "Total estimate: $" << tax * ((number_of_small_rooms * price_per_small_room) + (number_of_large_rooms* price_per_large_room))+ (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms* price_per_large_room) << endl;
    const int estimate_valid_for = 30;
    cout << "This estinate is valid for " << estimate_valid_for << " days" << endl;
}