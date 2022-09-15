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
};

int main()
{
    // Using default Ctor
    Player frank; 
    
    return 0;
}
/*
 * Default Ctor
 *      does not expect arguments
 *      if you wirte no Ctor then one will be provided by C++
 *      
 * If we decide to provide any kind of Ctor then C++ will not provide a no arg Ctor
 *      if we want a no arg Ctor we can declare one 
 * 
 * 
 */
