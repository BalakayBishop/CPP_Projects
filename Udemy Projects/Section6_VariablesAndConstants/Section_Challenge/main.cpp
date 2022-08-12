#include <iostream>

using namespace std;

int main()
{
    cout << "Frank's Carpet Cleaning\n" << endl;
    
    const double priceSmallRoom {25.0};
    const double priceLargeRoom {35.0};
    const double tax {0.06};
    const int numDays {30};
    
    int numSmallRooms {0};
    int numLargeRooms {0};
    double roomCost {0.0};
    double taxAmount {0.0};
    double total {0.0};
    
    cout << "Price per small room: $" << priceSmallRoom << endl; 
    cout << "Price per large room: $" << priceLargeRoom << endl;
    
    cout << "\nPlease enter the number of small rooms to be cleaned: ";
    cin >> numSmallRooms;
    
    cout << "Please enter the number of large rooms to be cleaned: ";
    cin >> numLargeRooms;
    
    roomCost = ((numSmallRooms * priceSmallRoom) + (numLargeRooms * priceLargeRoom));
    taxAmount = tax * roomCost;
    total = taxAmount + roomCost;
    
    cout << "\nSales tax: $" << taxAmount << endl;
    
    cout << "Estimated total: $" << total << endl;
    
    cout << "\nThis estimate is valid for " << numDays << " days." << endl;
    
    return 0;
}
