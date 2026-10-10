//
//  main.cpp
//  staticClassMembers
//
//  Created by Adithya R on 03/10/26.
//

#include <iostream>
#include "Player.h"
using namespace std;
void display_active_players(){
    cout << "Active players: " << Player::get_num_of_players_objects() << endl; // Since get_num_of_players_objects is a static method, we dont need an object to call it.
}

int main() {
    display_active_players();
    Player player1{};
    display_active_players();
    {
        Player player2{};
        display_active_players();
        
    }
    display_active_players();
    Player *enemy = new Player{"Enemy" , 1000 , 100};
    display_active_players();
    delete enemy;
    display_active_players();
    
}
