#include <iostream>
#include <string>
#include <vector>

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
};

int main()
{
    Player frank;
    frank.talk("hello");
    
    return 0;
}
/*
 * 3 basic modifiers 
 * Public, private, protected
 * 
 * Public 
 *      accessible everywhere
 * Private 
 *      accessible only by memebr or friends of the class 
 * Protected 
 *      used with inheritence
 * 
 * syntax 
 * public:
 * 
 * This is how we implement information hiding
 * 
 * 
 * 
 * 
 */
