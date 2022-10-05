#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "no boolalpha - (10 == 20): " << (10==10) << endl;
    cout << "no boolalpha - (10 == 20): " << (10==20) << endl;
    
    // Set t/f string value
    cout << boolalpha;
    cout << "boolalpha - (10 == 20): " << (10==10) << endl;
    cout << "boolalpha - (10 == 20): " << (10==20) << endl;
    
    // Toggle to 0/1
    cout << noboolalpha;
    cout << "noboolalpha - (10 == 20): " << (10==10) << endl;
    cout << "noboolalpha - (10 == 20): " << (10==20) << endl;
    
    // Reset to t/f using setf
    cout.setf(std::ios::boolalpha);
    cout << "boolalpha - (10 == 20): " << (10==10) << endl;
    cout << "boolalpha - (10 == 20): " << (10==20) << endl;
    
    // Reset using reset 
    cout << std::resetiosflags(std::ios::boolalpha);
    cout << "noboolalpha - (10 == 20): " << (10==10) << endl;
    cout << "noboolalpha - (10 == 20): " << (10==20) << endl;
    
    
    return 0;
}
/*
 * Formatting Boolean Types to Output stream
 *      default values 1 = true, 0 = false
 *      
 * setf 
 *      .setf(ios::boolalpha)
 *      resetiosflags
 * 
 * 
 */
