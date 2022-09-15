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
    void talk (string to_say) 
        {cout << name << " says " << to_say << endl;}
    bool is_dead ();
    void set_name (string n) {name = n;}
    void set_health (int h) {health = h;}
    void set_xp (int x) {xp = x;}
    
    string get_name () {return name;}
    int get_health () {return health;}
    int get_xp () {return xp;}
    
    // Constructors
    Player () {
        cout << "No args Ctor" << endl;
    }
    
    Player (string name) {
        cout << "String only Ctor" << endl;
    }
    
    Player (string name, int health, int xp) {
        cout << "3 arg Ctor" << endl;
    }
    
    ~Player () { cout << "Dtor called for " << name << endl; }
};

int main()
{
    { Player slayer;
    slayer.set_name("Slayer"); }
    
    { Player frank;
    frank.set_name("Frank");
    Player hero;
    hero.set_name("Hero");
    Player villain;
    villain.set_name("Villain"); }
    
    Player *enemy = new Player;
    enemy -> set_name("Enemy");
    
    Player *level_boss = new Player ("Level Boss", 100, 50);
    level_boss -> set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}
/*
 * Constructor or Ctor
 *      Special member method 
 *      Invoked during object creation
 *      they do not specify a return type 
 *      There are two types, no arg and arg constructor 
 * 
 * Destructor or Dtor
 *      they have a ~ before the name
 *      invoked automatically when object is destroyed 
 *      no return type, no params
 *      only one dtor per class 
 * 
 * 
 */


