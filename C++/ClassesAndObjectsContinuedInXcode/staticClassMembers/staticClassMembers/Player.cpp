//
//  Player.cpp
//  staticClassMembers
//
//  Created by Adithya R on 03/10/26.
//

#include <stdio.h>
#include "Player.h"

int Player::num_of_player_objects = 0;

Player::Player(std::string name_val, int health_val , int xp_val)
: name {name_val} , health{health_val} , xp{xp_val} {
    num_of_player_objects++;
    
}
Player::~Player(){
    num_of_player_objects--;
}

int Player::get_num_of_players_objects(){
    return num_of_player_objects;
}
