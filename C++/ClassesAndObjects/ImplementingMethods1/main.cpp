#include <iostream>
#include <string>
using namespace std;

class Account{
private:
    string name;
    double balance;
public:
    void setBalance(int bal){
        balance = bal;
    }
    double getBal(){
        return balance;
    }
    void setName(string n){
        name = n;
    }
    string getName();
    bool deposit(int amout);
    bool withdraw(int amount);
};

string Account::getName(){
    return name;
}
bool Account::deposit(int amount){
    balance+=amount;
    return true;
}
bool Account::withdraw(int amount){
    if (balance-amount>=0){
        balance = balance-amount;
        return true;
    }
    else {
        return false;
    }
}
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