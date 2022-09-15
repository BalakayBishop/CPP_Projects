#include <iostream>
#include "Movie.h"
#include "Collection.h"
#include <string>

using namespace std;

char print ()
{
    char selection {};
    
    cout << "\n-----------------------" << endl;
    cout << "A: add movie" << endl;
    cout << "D: display movies watched" << endl;
    cout << "I: increment movie watch count" << endl;
    cout << "Q: quit" << endl;
    cout << "Please make a selection: ";
    cin >> selection;
    
    return selection;
}

void add_movie(Collection &source, string name, string rating, int num_watch)
{
    cout << "\n-----------------" << endl;
    cout << "Please enter movie name: ";
    cin >> name;
    
    cout << "Please enter the movie rating: "; 
    cin >> rating;
    
    cout << "Please enter the number of times wathced: ";
    cin >> num_watch;
    
    source.add_movie(name, rating, num_watch);
}

void display (const Collection &source) 
{
    source.display();
}

void increment (Collection &source, string name)
{
    cout << "\n-----------------" << endl;
    cout << "Please enter movie name: ";
    cin >> name;
    
    source.increment_watch(name);
}

int main()
{
    // creating optional console-interface
    char selection {};
    string name {};
    string rating {};
    int num_watch {0};
    bool exit {false};
    
    Collection m_movies;
    
    do 
    {
        selection = print();
        switch (selection)
        {
            case 'A':
                add_movie(m_movies, name,rating, num_watch);
                break;
            case 'a':
                add_movie(m_movies, name, rating, num_watch);
                break;
            case 'D':
                display(m_movies);
                break;
            case 'd':
                display(m_movies);
                break;
            case 'I':
                increment(m_movies, name);
                break;
            case 'i':
                increment(m_movies, name);
                break;
            case 'Q':
                cout << "Thank you, goodbye" << endl;
                exit = true;
                break;
            case 'q':
                cout << "Thank you, goodbye" << endl;
                exit = true;
                break;
        }
        
    } while(exit != true);
    
    cout << endl;
    return 0;
}
