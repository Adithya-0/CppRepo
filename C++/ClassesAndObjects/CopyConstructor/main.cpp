#include <iostream>
#include <string>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    Player(string name_val = "None" , int health_val = 0 , int xp_val = 0);
    string returnName();
    int returnHealth();
    int returnXP();
    //Copy contructor
    Player(const Player &sourse);
    //Destructor
    ~Player(){
        cout << "Destructor is being called for: " << name << endl;
    }

};
Player::Player(const Player &source)
    :name{source.name} , health{source.health} , xp{source.xp}{
        cout << "Copy constructor - made copy of: " << source.name << endl;
    }
Player::Player(string name_val , int health_val , int xp_val)
    :name{name_val} , health{health_val} , xp{xp_val}{
}
string Player::returnName(){
    return name;
}

int Player::returnHealth(){
    return health;
}
int Player::returnXP(){
    return xp;
}

void displayPlayer(Player p){
    cout << "Name: " << p.returnName() << endl;
    cout << "Health: " << p.returnHealth() << endl;
    cout << "XP: " << p.returnXP() << endl;
}


int main(){
    Player empty;
    displayPlayer(empty);

}