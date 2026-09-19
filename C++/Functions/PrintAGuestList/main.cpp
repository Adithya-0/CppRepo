#include <iostream>
#include <string>
using namespace std;

void print_guest_list(const string guests[] , size_t size);
void clear_guest_list(string guests[] , size_t size);

int main(){
    string guests_list[] {"Larry" , "Moe" , "Curly"};
    size_t guests_list_size = 3;
    print_guest_list(guests_list , guests_list_size);
    clear_guest_list(guests_list , guests_list_size);
    print_guest_list(guests_list , guests_list_size);
}

void print_guest_list(const string guests[] , size_t size){
    for (int i = 0; static_cast<size_t>(i) < size ; ++i){
        cout << guests[i] << endl;
    }
    cout << endl;
}

void clear_guest_list(string guests[] , size_t size) {
    for (int i = 0 ; static_cast<size_t>(i) < size ; ++i){
        guests[i] = "Cleared";
    }
}