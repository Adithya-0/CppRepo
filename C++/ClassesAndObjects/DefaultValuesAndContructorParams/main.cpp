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
};

Player::Player(string name_val , int health_val , int xp_val)
    :name{name_val} , health{health_val} , xp{xp_val}{
}
string Player::returnName(){
    return name;
}




int main(){
    Player player("Spider");
    string name = player.returnName();
    cout << name << endl;
    Player player2("Bat" , 10);
    Player player3("Man" , 10 , 20);

    // Player player2;
    // name = player2.returnName();
    // cout << name << endl;
}