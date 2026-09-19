#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
public:
    //atrributes 
    string name {"Player"};
    int health {100};
    int xp {3};

    //methods
    void talk(string text_to_say) {
        cout << name << " says " << text_to_say << endl;
    }
    bool isDead(int health);
    void addHealth(int health_to_add){
        health = health + health_to_add;
        cout << "New health is "  << health << endl;
    }
};
int main(){
   Player frank;
   frank.name = "Frank";
   frank.health = 100;
   frank.xp = 12;
   frank.talk("Hi there"); 
   cout << frank.health << endl;
   frank.addHealth(50);
//    cout << frank.health << endl;

   Player *enemy = new Player;
   (*enemy).name = "Enemy";
   (*enemy).talk("I am the enemy");
   delete enemy;
   enemy = nullptr;


}

