#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    friend void display_player (Player &p); // for function
    friend void Other :: display (Player &p); // for class
    int health;
};

class Other {
private:
    void display (Player &p) {
        
    }
};

void display_player (Player &p) {
    // no longer need a getter
    cout << p.health << endl;
}

int main()
{
    
    
    return 0;
}
/* 
 * Friends
 *      a function or class that has access to private class member
 *      and, that function or class is NOT a member of the class being accessed
 * 
 * Function
 *      can be regular non-member functions
 *      can be member methods of another class
 * 
 * Class 
 *      another class can have access to private class members
 * 
 * Friendhsip must be granted NOT taken
 * Friend is not symmetric
 *      must be explicitly granted 
 *      A is friend of B, B is NOT a friend of A
 * Friendship is not transitive
 *      A is friend of B
 *      B is friend of C 
 *      A is NOT friend of C
 * Friendship is NOT inherited
 * 
 */
