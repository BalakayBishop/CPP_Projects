#include <iostream>

using namespace std;

class Shallow {
private:
    int *data;
    
public:
    void set_data(int d) {
        *data = d;
    }
    
    int get_data() {
        return *data;
    }
    
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow :: Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow :: Shallow(const Shallow &source) : data(source.data) {
    cout << "Copy Ctor - Shallow Copy" << endl;
}

Shallow :: ~Shallow() {
    delete data;
    cout << "Dtor called, freeing memory" << endl;
}

void display_shallow(Shallow s) {
    cout << s.get_data() << endl;
}

int main()
{
    Shallow m_obj1 {100};
    display_shallow(m_obj1); 
    
    Shallow m_obj2 {m_obj1};
    m_obj2.set_data(1'000);
    
    
    
    cout << endl;
    return 0;
}
/* 
 * Shallow copy 
 *      default behavior 
 *      member-wise copy of the attributes 
 *      the pointer is copied NOT what it points to (shallow)
 * 
 * Problem: when we release the storage in the dtor the object still points to the memory location
 * 
 * This program shows how the shallow copy of m_obj1 will create pointers to invalid memory 
 * This program when exiting the scope of main will crash
 *      The problem stems from the copy of the object being sent to the Dtor after the display of m_obj1 
 *      is out of scope
 *      The program will then go to make a copy of m_obj1 for m_obj2 but it will cause m_obj2 to point to
 *      invalid memory
 * 
 * 
 */
