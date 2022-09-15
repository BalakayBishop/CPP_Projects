#include <iostream>
#include "Player.h"

using namespace std;

void display_active () {
    cout << "Active player count: " << Player :: get_numPlayers() << endl;
}

int main()
{
    display_active();
    
    Player hero {"Hero"};
    
    display_active();
    
    Player *enemy = new Player("Enenmy", 100, 100);
    display_active();
    delete enemy;
    display_active();
    
    return 0;
}
/*
 * class data members can be declared as static
 *      a single data member that belongs to the class, not the objects
 *      useful to store class-wide data
 * 
 * static members cannot be init in the declaration 
 * 
 * 
 */
