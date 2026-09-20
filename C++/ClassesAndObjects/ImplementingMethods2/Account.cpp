#include "Account.h"
std::string Account::getName(){
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