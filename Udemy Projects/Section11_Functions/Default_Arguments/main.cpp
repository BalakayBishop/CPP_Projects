#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost (double base_cost, double tax_rate = 0.06, double shipping = 3.50);

void greeting (string name, string prefix = "Mr. ", string suffix = "");

int main()
{
    double cost {0};
    cost = calc_cost(100, .08, 4.25); // no defaults used 
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;
    
    cost = calc_cost(100, .08); // uses default shipping
    cout << "Cost is: " << cost << endl;
    
    cost = calc_cost(100); // uses default tax rate and shipping
    cout << "Cost is: " << cost << endl;
    
    greeting ("Glenn Jones", "Dr.", "M.D.");
    greeting ("James Rogers", "Professor", "Ph.D.");
    greeting ("Frank Miller", "Dr.");
    greeting ("William Smith");
    
    
    return 0;
}

double calc_cost (double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting (string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

// Default args
// *      defaults can be in the prototype OR the definition, not both
// *      the default allows a default value to be used if an arg is not provided 
// *      Example
// *          double calc_cost (double cost, double tax_rate = 0.06);
// *          main { cost = calc_cost (200); uses 6%
// *                 cost = calc_cost (200, .08); uses 8%
// *      once you have one default, all must have 