#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
    int *data;
    
public:
    void set_data(int d);
    int get_data () {
        return *data;
    }
    Move(int d);
    Move(Move &&source);
    //Move(const Move &source);
    ~Move();
};

// Deep Copy Ctor
//Move :: Move(const Move &source) {
//    data = new int;
//    *data = *source.data;
//}

// Move Ctor
Move :: Move (Move &&source) :data {source.data} {
    source.data = nullptr;
}

Move :: ~Move() {
    if (data != nullptr) {
        cout << "Dtor freeing data: " << *data << endl;
    }
    else {
        cout << "Dtor freeing for nullptr" << endl;
    }
    delete data;
}

int main()
{
    vector<Move> move_vec {};
    
    // creating a temp obj (r-value)
    move_vec.push_back(Move {10}); 
    move_vec.push_back(Move {20});
    move_vec.push_back(Move {30});
    move_vec.push_back(Move {40});
    move_vec.push_back(Move {50});
    
    
    return 0;
}
/* 
 * Intro'd in C++11
 * Move semantics are all about R-value and L-value
 * The move Ctor will move rather than copy an object 
 * 
 * R-value references 
 *      used in move semantics
 *      uses the opertor &&
 *      int &&r_ref
 *      we can use r-value param in function
 *      this function will expect an r-value in the param
 *      void func(int &&num)
 * 
 * L-value reference
 *      int &l_ref
 *      if we use an l-value ref in function param when calling we need to use an l-value
 *      void func(int &num)
 * 
 * Rather than copying we are "stealing" the object
 * 
 * Move Ctor is much more efficient because rather than allocating memory on the heap
 *      we are going to be "stealing" the memory location
 */
