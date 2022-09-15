#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player 
{
public:
    // attributes 
    string name;
    int health;
    int xp; 
    
    //methods 
    void talk (string text_to_say) {cout << name << " says " << text_to_say << endl;}
    bool is_dead ();
}; 

class Account 
{
public: 
    // attributes 
    string name {"Frank"};
    double balance {0};
    
    //methods 
    void deposit (double bal) {balance += bal;}
    void withdraw (double bal) {balance += bal;}
}; 

int main()
{
    Player frank; 
    frank.name = "Frank"; 
    frank.health = 100;
    frank.xp = 12;
    frank.talk("hi there");
    
    Player *enemy = new Player;
    // Using dot operator
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    
    // Arrow operator
    enemy -> xp = 15;
    enemy -> talk("I will destroy you");
    
    // --------------------------------------
    Account frank_acct;
    frank_acct.name = "Frank's account";
    frank_acct.balance = 5'000.00;
    frank_acct.deposit(1'000.00);
    frank_acct.withdraw(500.00);
    
    return 0;
}
/*
 * There are two ways to access class members like methods and attributes
 * Dot operator and Arrow operator 
 * 
 * DOT Operator 
 *      just like with other methods like in the string and vector
 *      we can use the dot operator for our class members 
 *      If we are going to use the dot operator on a pointer, we must dereference it first
 *      Example: frank_account.balance();
 *      Example ptr1: (*frank_account).balance();
 *      Example ptr2: frank_account -> balance;
 *          ptr2 == ptr1
 * 
 * Arrow
 *      the arrow operator works with pointers and we do not have to dereference the pointer first
 * 
 * Enemy is not the object, it is a pointer to the object
 */
