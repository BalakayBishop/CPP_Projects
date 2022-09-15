#include "Collection.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

    Collection::Collection() {
    }

    Collection::~Collection() {
    }

    // methods
    bool Collection :: add_movie(string name, string rating, int num_watch) 
    {
        for(const Movie &v : movies) 
        {
            if (v.get_name() == name) 
            {
                cout << name << " already exists, try again." << endl;
                return false;
            }
        }
        Movie temp {name, rating, num_watch};
        movies.push_back(temp);
        cout << name << " added" << endl;
        return true;
    }
    
    bool Collection :: increment_watch(string name) 
    {
        for(Movie &v : movies) 
        {
            if (v.get_name() == name) 
            {
                v.increment_watch();
                return true;
            }
        }
        cout << "Movie not found" << endl;
        return false;
    }
    
    void Collection :: display() const 
    {
        if (movies.size() == 0)
        {
            cout << "No movies to display" << endl;
        }
        else 
        {
            for (auto v : movies)
            {
                v.display_movie();
            }
        }
        
    }
