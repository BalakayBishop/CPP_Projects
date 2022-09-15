#pragma once
#include <string>

using std::string;

class Movie
{
private:
    string name;
    string rating;
    int num_watch;
    
public:
    Movie(string name, string rating, int num_watch);
    Movie(const Movie &source);
    ~Movie();
    
    // getters
    string get_name() const;
    string get_rating() const;
    int get_watch() const;
    
    // setters
    void set_name(string n);
    void set_rating(string r);
    void set_watch(int w);
    
    // methods
    void display_movie() const; 
    void increment_watch();

};

