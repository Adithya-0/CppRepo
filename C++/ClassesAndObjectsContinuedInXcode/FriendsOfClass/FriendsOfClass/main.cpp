#include <iostream>
using namespace std;
class Player{
    friend void display_player_stats(Player &p);
    friend class Other_class;
private:
    string name{};
    int health{};
    int xp{};
public:
    Player(string name_val , int health_val , int xp_val)
    : name{name_val} , health{health_val} , xp{xp_val}{}
    
};
class Other_class{
public:
    void display_player_stats_from_other_class(Player &p){
        cout << p.name << endl;
        cout << p.health << endl;
        cout << p.xp << endl;
    }
   
    
};

void display_player_stats(Player &p){
    cout << p.name << endl;
    cout << p.health << endl;
    cout << p.xp << endl;
}

//void display_player_stats_not_friend(Player &p){
//    cout << p.name << endl;
//    cout << p.health << endl;
//    cout << p.xp << endl;
//}

int main(){
    
    Player p {"Frank"  , 100 ,10};
    display_player_stats(p);
    cout << "======================" << endl;
    Other_class o1{};
    o1.display_player_stats_from_other_class(p);
    return 0;
}
