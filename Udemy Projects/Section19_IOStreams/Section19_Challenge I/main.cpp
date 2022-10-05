#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City 
{
    string name;
    long population;
    double cost;
};

struct Country 
{
    string name;
    vector<City> cities;
};

struct Tours 
{
    string title;
    vector<Country> countries;
};

int main()
{
    Tours tours 
    { "Tour Ticket Prices from Miami", 
        {
            {
                "Colombia", {
                    {"Bogota", 8'778'000, 400.98},
                    {"Cali", 2'401'000, 420.12},
                    {"Medellin", 2'464'000, 350.98},
                    {"Cartegena", 972'000, 345.34}
                },
            },
            {
                "Brazil", {
                    {"Rio de Janiero", 13'500'000, 567.45},
                    {"Sao Paulo", 11'310'000, 975.45},
                    {"Salvador", 18'234'000, 855.99}
                },
            },
            {
                "Chile", {
                    {"Valdivia", 260'000, 569.12},
                    {"Santiago", 7'040'000, 520.00}
                },
            },
            {
                "Argentina", {
                    {"Buenos Aires", 3'010'000, 723.77}
                }
            },
        }
    };
    
//     Unformatted Display
//    cout << tours.title << endl;
//    for (auto country : tours.countries)
//    {
//        cout << country.name << endl;
//        
//        for (auto city : country.cities)
//        {
//            cout << "\t" << city.name
//                 << "\t" << city.population
//                 << "\t" << city.cost << endl;
//        }
//    }

    // Soltuion w/ Corrections
    const int total_width {70};
    const int field1_width {20}; // Country Name
    const int field2_width {20}; // City name
    const int field3_width {15}; // Population
    const int field4_width {15}; // cost

    cout << endl;
    cout << setw(50) << right << tours.title << "\n\n";
    cout << setw(field1_width) << left << "Country" 
         << setw(field2_width) << left << "City" 
         << setw(field3_width) << right << "Population" 
         << setw(field4_width) << right << "Cost" << endl;
    
    cout << setw(total_width) << setfill('-') << "" << endl;
    
    cout << setfill(' ');
    cout << setprecision(2) << fixed;
    
    for (auto country : tours.countries)
    {
        for (size_t i {0}; i < country.cities.size(); i++)
        {
            cout << setw(field1_width) << left << ((i == 0) ? country.name : "")
                 << setw(field2_width) << left << country.cities.at(i).name 
                 << setw(field3_width) << right << country.cities.at(i).population
                 << setw(field4_width) << right << country.cities.at(i).cost 
                 << endl;
        }
        
        cout << endl;
    }

    
    cout << endl;
    return 0;
}
/*
 * Creating a table with trip prices to another coutnry/city
 * 
 * Tours struct (countries, cities, pop, and cost data)
 * 
 */
