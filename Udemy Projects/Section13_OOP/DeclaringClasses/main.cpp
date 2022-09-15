#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player 
{
    // attributes 
    string name;
    int health;
    int xp; 
    
    //methods 
    void talk (string);
    bool is_dead ();
}; 

class Account 
{
    // attributes 
    string name {"Frank"};
    double balance {0};
    
    //methods 
    bool deposit (double);
    bool withdraw (double);
};

int main()
{
    Player frank;
    Player hero; 
    
    Player players[] {frank, hero}; // an array of player objects
    
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    Player *enemy {nullptr}; // pointer to an object of class Player
    enemy = new Player; // pointer creates a new object
    
    delete enemy;
    
    Account frank_account;
    Account jim_account; 
    
    return 0;
}
/*
 * Syntax 
 *      keyword class then class_name
 * We can also use pointers to objects 
 * 
 * C++ 11 allows initialization of attributes in the class declaration 
 * 
 * 
 * 
 * 
 */