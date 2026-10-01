#include <iostream>
#include <string>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    Player();
    Player(string name_val);
    Player(string name_val , int health_val , int xp_val);
    string returnName();
};

Player::Player(string name_val , int health_val , int xp_val)
    :name{name_val} , health{health_val} , xp{xp_val}{
    cout << "Three args contructor called" << endl;
}

Player::Player() : 
    Player {"None" , 0 , 0}{
}
Player::Player(string name_val)
    : Player{name_val , 0 , 0}{
    cout << "1 arg constructor called" << endl;
}
string Player::returnName(){
    return name;
}




int main(){
    Player player("Adithya");
    string name = player.returnName();
    cout << name << endl;

    // Player player2;
    // name = player2.returnName();
    // cout << name << endl;
}