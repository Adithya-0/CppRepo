//
//  Player.h
//  staticClassMembers
//
//  Created by Adithya R on 03/10/26.
//

#ifndef Player_h
#define Player_h
#include <string>
#include <iostream>
class Player{
private:
    static int num_of_player_objects; // This does not belong to any object, this belongs to the class
    std::string name;
    int health;
    int xp;
public:
    std::string get_name()  {
        return name;
    }
    int get_health(){
        return health;
    }
    int get_xp(){
        return xp;
    }
    static int get_num_of_players_objects(); // Because this function is static, it only has accesses to static
                                            //(contd)Variables. It does not have access to any of the object att-
                                            //(contd)ributes, like name,health and xp. Those belong to specific objects. Static belongs to the class. So this is a class function and has access to only that static num_of_player_objects int as of now.
        
    Player(std::string name_val = "None" , int health_val = 100 ,int xp_val = 10);
    ~Player();
};




#endif /* Player_h */
