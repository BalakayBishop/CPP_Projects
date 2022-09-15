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
    // single Ctor with default params
    Player (string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player (string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "3-arg ctor" << endl;
}

int main()
{
    Player empty;                           // all default args
    Player frank {"Frank"};                 // 1 arg, 2 default
    Player hero {"Hero", 100};              // 2 args, 1 default
    Player villain {"Villain", 100, 10};    // 3 args, 0 default
    
    return 0;
}
/* 
 * We can provide default param for the Ctor
 * 
 * 
 * 
 */