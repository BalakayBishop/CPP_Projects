#include <iostream>
#include <memory>
#include <vector>

using namespace std;
using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::unique_ptr;
using std::make_unique;

class Test 
{
private:
    int data;
public:
    Test() : data {0} {cout << "\tTest Ctor (" << data << ")" << endl;}
    Test(int data) : data {data} {cout << "\tTest Ctor (" << data << ")" << endl;}
    ~Test() = default;
    int get_data () {return data;}
};

// Function protos
unique_ptr<vector<shared_ptr<Test>>> make(); // use make_unique to point to vec
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

int main()
{
    int num {0};
    
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr; // creating on stack
    
    vec_ptr = make();
    
    cout << "How many data points do you want to enter: ";
    cin >> num;
    
    fill(*vec_ptr, num);
    
    display(*vec_ptr);
    
    return 0;
}

// Could return type with auto 
unique_ptr<vector<shared_ptr<Test>>> make() 
{
    /* My Soltuion
    unique_ptr<vector<shared_ptr<Test>>> ptr = make_unique<vector<shared_ptr<Test>>>();
    return ptr; */
    
    // Given Solution
    return make_unique< vector< shared_ptr<Test> > >();
}

void fill(vector<shared_ptr<Test>> &vec, int num) 
{
    int input {0};
    for (int i {0}; i < num; i++)
    {
        cout << "Enter int data point [" << (i+1) << "] : ";
        cin >> input;
        vec.push_back( make_shared<Test>(input) );
    }
}

void display(const vector<shared_ptr<Test>> &vec)
{
    cout << "-----Displaying Vector-----" << endl;
    for (const auto &v : vec)
    {
        // My soltuion
        // cout << *v << endl;
        // Given solution
        cout << v->get_data() << endl;
    }
}

/*
 * Challenge Description: 
 * vec_ptr is a unique pointer to a vector
 *      an obj that manages a raw pointer
 *      pointing to a vector
 *      the vector contains shared pointers of Test 
 *      the shared pointer manages the Test obj
 * 
 * No NEW and no DELETE use MAKE
 * 
 * fill will be a loop asking for data points to create shared pointer to test w/ pushback
 */
