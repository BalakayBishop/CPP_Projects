#pragma once
#include <string>
#include <vector>
#include "Movie.h"

using std::string;
using std::vector;

using std::string;

class Collection
{
private:
    vector<Movie> movies;
public:
    Collection();
    ~Collection();
    
    // methods
    bool add_movie(string name, string rating, int num_watch);
    bool increment_watch(string name);
    void display() const;

};

