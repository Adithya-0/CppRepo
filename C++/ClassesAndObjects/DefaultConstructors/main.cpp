#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string val){
        name = val;
    }
    string get_name(){
        return name;
    }
    // Player(){ // User defined no-args constructor
    //     name = "None";
    //     health = 100;
    //     xp = 3;
    // }
    Player(string n , int health_val , int xp_val){
        name = n;
        health = health_val;
        xp = xp_val;
    }
};

int main(){
    // Player frank; // Error
    Player adithya("Adithya" , 100 , 100);
    cout << adithya.get_name() << endl;
}