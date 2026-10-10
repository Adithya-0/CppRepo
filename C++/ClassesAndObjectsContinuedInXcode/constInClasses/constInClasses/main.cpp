//
//  main.cpp
//  constInClasses
//
//  Created by Adithya R on 03/10/26.
//

#include <iostream>
#include "string"
using namespace std;
class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string n){
        name = n;
    }
    string get_name() const {
        return name;
    }
    Player(string name_val = "None" , int health_val = 100 ,int xp_val = 10);
};
Player::Player(string name_val, int health_val , int xp_val)
: name {name_val} , health{health_val} , xp{xp_val} {
    
}

int main(int argc, const char * argv[]) {
    Player player1{};
    cout << player1.get_name() << endl;
    Player player2{"Adithya" , 20};
    cout << player2.get_name() << endl;
    
    const Player Villain{"Villain" , 100 , 55};
    Player Hero{"Hero" , 100 , 15};
    cout << Villain.get_name() << endl;
    cout << Hero.get_name() << endl;
    
    
}
