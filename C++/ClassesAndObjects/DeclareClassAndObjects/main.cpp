#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    //atrributes 
    string name {"Player"};
    int health {100};
    int xp {3};

    //methods
    void talk(string str);
    bool isDead(int health);
};
int main(){
    Player frank;
    Player hero;
    Player players[] = {frank , hero};
    vector <Player> player_vec = {frank};
    player_vec.push_back(hero);
    Player *enemy = nullptr;
    enemy = new Player;

    delete enemy;
    return 0;
}

