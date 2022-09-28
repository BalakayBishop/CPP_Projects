#include <iostream>

using namespace std;

int main()
{
    
    
    return 0;
}
/*
 * Inheritence
 *      Provides a method of creating classes from existing class 
 *      they contain the data and behaviors of the existing class
 *      Allow for reuse of existing classes 
 *      We can also modify the behaviors without modifying the inherited class 
 * 
 * Related Classes Example:
 *      Player, Enemy, Boss, Hero, etc;
 *      Account, Savings Account, Checking Account
 *      Shape, line, circle, square
 *      Person, employee, student, faculty 
 * 
 * Accounts:
 *      Account -> balance, deposit, withdraw
 *      Savings -> balance, deposit , withdraw, interest
 *      Checking -> balance, minimum balance? 
 * 
 * Without Inheritence we could create multiple separate classes that implement all these attributes
 * With Imheritence we could specify Account and all the other classes inherit from Account
 *  an then specify anything that needs to be specialized
 * 
 * Terminology and Notation:
 *      Inheritence: process of creating new classes from existing classes
 *      Single Inheritence: a new class is created from another 'single' class
 *      Multiple Inheritence: a new class is created from 2 or more classes
 *      Base class: also called the parent/super class, is the class being extended or inherited from
 *      Derived class: also called the child/sub class, is the class that is inheriting from the parent
 *      "Is-A" Relationshiop: public inheritence, dervied classes are sub-types of theor base class
 *      Generalization: combing classes into a single, more general class baseed on commonality
 *      Specialization: creating new classes from existing classes proving more specialized attributes
 *      
 * Inheritence is transitive 
 * 
 * Composition
 *      Both allow reuse of existing classes
 *      Public Inheritence creates an "is-a" relationship
 *      Composition creates "has-a" relationship 
 *          Example: a Person "has-a" account
 *      class Person { private: string name; Account account; }
 *      this is composition of a Person having an Account
 * 
 * Syntax:
 *      first declare the Parent class and its attributes
 *      then, declare the Child class and its access specifier
 *      Types of inheritence: public (is-a), private/protected (has-a) 
 *      class Account {...}
 *      Class SavingsAccount: public Account {...}
 *      SavingsAccount will inherit everything from Account
 * 
 * Multiple Inheritence
 *      A dervied class inherits from two or more Base class at the same time
 *      The Base classes may belong to unrelated class hierarchies
 *      For example: A Department chair member is-a Faculty member AND is-a Administrator
 *      Syntax: class DeptChair : public Faculty, public Administrator
 * 
 * 
 */
