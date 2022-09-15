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
    
    // Copy Prototype
    Player (const Player &source);
    
    // Dtor
    ~Player () {cout << "Dtor called for: " << name << endl;}
    
    // getters
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
};

Player::Player (string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "3-arg ctor" + name << endl;
}

// Copy Ctor implement
Player:: Player (const Player &source) 
    : name(source.name), health(source.health), xp(source.xp) {
        cout << "Copy ctor called for: " << source.name << endl;
    }
    
    void display_player (Player p)
    {
        cout << "Name: " << p.get_name() << endl;
        cout << "Health: " << p.get_health() << endl;
        cout << "XP: " << p.get_xp() << endl;
    }

int main()
{
    Player empty;                           // all default args
    
    Player empty2 {"XXXXX", 100, 50};
    Player new_obj {empty2};                // Copy Ctor for the new_obj, copy of empty2
    
    display_player(empty);                  // print the values of obj
    
    Player frank {"Frank"};                 // 1 arg, 2 default
    Player hero {"Hero", 100};              // 2 args, 1 default
    Player villain {"Villain", 100, 10};    // 3 args, 0 default
    
    return 0;
}
/* 
 * Copy Ctor
 *      when objects are copied C++ must create a new object from the existing object
 * 
 * When is a copy made?
 *      passing object by value 
 *      returning an object from a function by value
 *      constructing one object based on another of the same class
 * 
 * Always provide a user defined when class has raw pointer 
 * Provide copy ctor with a const ref param
 * Use STL classes that provide copy ctor
 * Avoid using raw pointer data member
 * 
 * If you do not provide a user-defined, C++ will provide a copy ctor
 * Shallow vs Deep copy
 * 
 * Declaring 
 *      Type::Type (const Type &source)
 *      
 * 
 * 
 * 
 */
