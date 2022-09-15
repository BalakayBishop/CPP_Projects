#include "Movie.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

    Movie :: Movie(string name, string rating, int num_watch)
    : name{name}, rating{rating}, num_watch{num_watch} {
    
    }

    Movie :: Movie(const Movie &source) 
    : Movie {source.name, source.rating, source.num_watch} {
        
    }
    Movie :: ~Movie() {
    
    }
    
    // getters
    string Movie :: get_name() const {
        return name;
    }
    string Movie :: get_rating() const {
        return rating;
    }
    int Movie :: get_watch() const {
        return num_watch;
    }
    
    // setters
    void Movie :: set_name(string n) {
        name = n;
    }
    void Movie :: set_rating(string r) {
        rating = r;
    }
    void Movie :: set_watch(int w) {
        num_watch = w;
    }
    
    // methods
    void Movie :: display_movie() const {
        cout << name << ", " << rating << ", " << num_watch << endl;
    }
    void Movie :: increment_watch() {
        ++num_watch;
    }