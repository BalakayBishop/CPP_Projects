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

// Ctor init list
Player::Player () 
    : name{"None"}, health{0}, xp{0} {
    // these are no longer needed since we used init list
//    name = "None";
//    health = 0;
//    xp = 0;
}

Player::Player (string name_val) 
    : name{name_val}, health{0}, xp{0} {
//    name = name_val;
//    health = 0;
//    xp = 0;
}

Player::Player (string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
//    name = name_val;
//    health = health_val;
//    xp = xp_val;
}

int main()
{
    Player empty;                           // no args ctor
    Player frank {"Frank"};                 // 1 arg ctor
    Player villain {"Villain", 100, 10};    // 3 arg ctor 
    
    return 0;
}
/* 
 * Ctor initialization lists 
 *      more efficient
 *      immediately follows the param list 
 *      init the data members as the object is created 
 *      
 * Best way 
 *      Player :: Player (string name, etc.) {name {"blah blah"}, etc. }
 * 
 * 
 */
