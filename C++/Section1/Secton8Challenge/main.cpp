#include <iostream>
using namespace std;

int main() {
    cout << "Enter an amount in cents: " ;
    int amount_entered {};
    cin >> amount_entered;
    cout << "You can provide the change as follows :" << endl;
    cout << "dollars : " << amount_entered / 100 << endl;
    cout << "quarters : " << (amount_entered % 100) / 25 << endl;
    cout << "dimes : " << ((amount_entered % 100) % 25) / 10 << endl;
    cout << "nickels : " << (((amount_entered % 100) % 25) % 10) / 5 << endl;
    cout << "pennies : " << ((((amount_entered % 100) % 25) % 10) % 5) / 1 << endl;

}