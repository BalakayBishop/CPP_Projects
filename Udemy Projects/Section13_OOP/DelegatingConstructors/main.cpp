#include <iostream>
#include <string>

using namespace std;

class Player 
{
private:
    string name;
    int health;
    int xp;
    
public:
    // Overloaded Ctors
    Player (); // no arg ctor
    Player (string name_val);
    Player (string name_val, int health_val, int xp_val);
};

// this is going to delegate to the 3-arg ctor
Player::Player () : Player {"None", 0, 0} {
    cout << "No-arg ctor" << endl;
}

// this is going to delegate to the 3-arg ctor
Player::Player (string name_val) : Player {name_val, 0, 0} {
    cout << "1-arg ctor" << endl;
}

Player::Player (string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "3-arg ctor" << endl;
}

int main()
{
    Player empty;                           // no args ctor
    Player frank {"Frank"};                 // 1 arg ctor
    Player villain {"Villain", 100, 10};    // 3 arg ctor
    
    return 0;
}
/* 
 * We want to minimize duplicated code 
 * C++ allows delegating ctors
 *      avoids duplication
 * 
 * 
 * 
 */