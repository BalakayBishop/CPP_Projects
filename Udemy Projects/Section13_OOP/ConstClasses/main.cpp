#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
    
public:
    string get_name() const {
        return name;
    }
    
    void set_name(string name_val) {
        name = name_val;
    }
    
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player :: Player() : Player {"none", 0, 0} {
    
}

Player :: Player(string name_val) : Player {name_val, 0, 0} {
    
}

Player :: Player(string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        
    }
    
void display_player_name (const Player &p) {
    cout << p.get_name() << endl;
}

int main()
{
    const Player villain {"Villain", 100, 50};
    
    Player hero {"Hero", 100, 50};
    
    return 0;
}
/*
 * Const 
 *      using const keyword in the Ctor statement 
 *      the compiler does not expect a const object and may think the function can change it 
 *      therefore violating the const qualifer and results with compiler error
 * 
 * We can say that specific methods will not change the object 
 *      we put the const qualifier before the semi-colon
 * 
 * Adding the const to the function in the class declaration tells the compiler that we 
 *      guarantee that function will never change anything about the object 
 * 
 * Rule of thumb: All getters should be const 
 * 
 */
