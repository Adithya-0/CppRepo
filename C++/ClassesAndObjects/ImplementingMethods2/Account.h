#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
//Best practise is NOT to use 'using namespace std' here because whichever file imports this
// will also get start using 'using namespace std; and it will be very to difficult to keep track
class Account{
private:
    std::string name;
    double balance;
public:
    void setBalance(int bal){
        balance = bal;
    }
    double getBal(){
        return balance;
    }
    void setName(std::string n){
        name = n;
    }
    std::string getName();
    bool deposit(int amout);
    bool withdraw(int amount);
};
#endif 