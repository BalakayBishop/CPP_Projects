#pragma once
#include <string>

using std::string;

class Player
{
private:
    static int num_players;
    string name;
    int health;
    int xp;
public:
    string get_name() {
        return name;
    }
    int get_health() {
        return health;
    }
    int get_xp() {
        return xp;
    }
    
    static int get_numPlayers ();
    
    Player(string name_val = "none", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    ~Player();

};

