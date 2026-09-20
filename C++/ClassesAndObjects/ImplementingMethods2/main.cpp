#include <iostream>
using namespace std;
#include "Account.h"

int main(){
    Account frank;
    frank.setName("Frank");
    frank.setBalance(2000);
    string name = frank.getName();
    double bal = frank.getBal();
    cout << "Name of the account is " << name << endl;
    cout << "Balance is " << bal << endl;
    if(frank.withdraw(500)){
        cout << "New balance is " << frank.getBal() << endl;
    } else {
        cout << "Insufficeint funds" << endl;
    }
    if(frank.withdraw(1500)){
        cout << "New balance is " << frank.getBal() << endl;
    } else {
        cout << "Insufficeint funds" << endl;
    }
    
}