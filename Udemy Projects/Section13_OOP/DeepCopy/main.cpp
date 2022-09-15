#include <iostream>

using namespace std;

class Deep {
private:
    int *data;
    
public:
    void set_data(int d) {
        *data = d;
    }
    
    int get_data() {
        return *data;
    }
    
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep :: Deep(int d) {
    data = new int;
    *data = d;
}

Deep :: Deep(const Deep &source) {
    //creating a new pointer, unique memory location in heap
    data = new int;
    *data = *source.data; // the pointer is pointing to the value in memory
    
    cout << "Copy Ctor - Deep Copy" << endl;
}

// Deep Copy Ctor that can delegate 
/*
Deep :: Deep(const Deep &source) : Deep {*source.data} {
    
} */

Deep :: ~Deep() {
    delete data;
    cout << "Dtor called, freeing memory" << endl;
}

void display_shallow(Deep s) {
    cout << s.get_data() << endl; // this will exec the Copy Ctor creating new memory loc
}

int main()
{
    Deep m_obj1 {100};
    display_shallow(m_obj1); 
    
    Deep m_obj2 {m_obj1};
    m_obj2.set_data(1'000);
    
    
    
    cout << endl;
    return 0;
}
/*
 * Deep Copy
 *      with deep copies we do not point to a memory location
 *      we create a copy of the data being pointed-to 
 *      each copy will have a pointer to unique storage in the heap
 *      we want a deep copy Ctor when we have raw pointers
 * 
 * the Ctor/Dtor is going to be the same 
 * The Copy Ctor is going o be different
 * 
 * Instead of making a copy of the memory location to be used 
 * A deep copy is going to allocate new memory space and will copy the data that is being pointed-to
 */ 
