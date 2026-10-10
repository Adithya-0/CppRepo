//
//  main.cpp
//  thisPointer
//
//  Created by Adithya R on 03/10/26.
//

#include <iostream>
using namespace std;

class Accounts{
public:
    void chec_if_sameobj(Accounts &other){
        if(this == &(other)){
            cout <<"They are the same objects and are at the same memory location" << endl;
            cout << this << endl;
            cout << (&other) << endl;
        } else {
            cout << "They are not the same objects" << endl;
        }
        cout << "===============" << endl;
    }
};

int main(int argc, const char * argv[]) {
    Accounts account1{};
    Accounts account2{};
    account1.chec_if_sameobj(account1);
    account1.chec_if_sameobj(account2);
}
