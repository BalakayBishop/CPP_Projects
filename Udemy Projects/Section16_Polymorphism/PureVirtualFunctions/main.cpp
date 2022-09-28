#include <iostream>
#include <vector>

using namespace std;
using std::vector;

class Shape // Abstract
{
private:
    // no attributes
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape();
};

class Open_Shape : public Shape // Abstract
{
public:
    virtual ~Open_Shape();
};

class Closed_Shape : public Shape // Abstract
{
public:
    virtual ~Closed_Shape();
};

class Line : public Open_Shape // Concrete
{
public:
    virtual void draw() override {
        cout << "Drawing line" << endl;
    }
    
    virtual void rotate() override {
        cout << "Rotating line" << endl;
    }
    
    virtual ~Line();
};

class Circle : public Closed_Shape // Concrete
{
public:
    virtual void draw() override {
        cout << "Drawing circle" << endl;
    }
    
    virtual void rotate() override {
        cout << "Rotating circle" << endl;
    }
    
    virtual ~Circle();
};

class Square : public Closed_Shape // Concrete
{
public:
    virtual void draw() override {
        cout << "Drawing square" << endl;
    }
    
    virtual void rotate() override {
        cout << "Rotating square" << endl;
    }
    
    virtual ~Square();
};

void screen_refresh(const vector<Shape *> &shapes)
{
    cout << "Refreshing" << endl;
    for (const auto p: shapes)
        p->draw();
}

int main()
{
    // trying to create Shape
    // Shape s; OR Shape *s = new Shape() -> ERROR
    
    Circle c;
    c.draw(); // statically bound
    
    Shape *circle_ptr = new Circle(); 
    circle_ptr->draw(); // dynamically bound to Circle::draw()
    
    Shape *circle1 = new Circle();
    Shape *line1 = new Line();
    Shape *square1 = new Square();
    
    vector<Shape *> vec {circle1, line1, square1};
    
    for (const auto ptr : vec)
        ptr->draw(); // dynamically bound to the Concrete obj
        
    screen_refresh(vec); 
    
    delete circle_ptr;
    delete circle1;
    delete line1;
    delete square1;
    
    return 0;
}
/*
 * Abstract Class
 *      cannot instantiate objects
 *      these classes are used as base class in inheritance hierarchies
 *      referred to as Abstract Base Classes vs Concrete
 *      General class that is parent to all other classes
 *      must contain one pure virtual function
 * 
 * Concrete Class 
 *      used to instantiate
 *      
 * Pure Virtual
 *      used to make a class abstract
 *      specifiec with = 0
 *      virtual void function() = 0;
 *      derived must override the base class 
 *      if the derived does not then it too will be abstract
 * 
 * We can use base class pointers and references to dynamically refer to concrete classes 
 * 
 */
