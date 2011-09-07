//#include "m/m_incl.h"
#include "int_vector.h"
#include <iostream>

using namespace std;

int main() {
    int_vector v(3);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    
    int_vector w(3);
    w[0] = 4;
    w[1] = 6;
    w[2] = 8;
    
    //int_vector u = v + w;
    
    cout << v << endl;
    cout << w << endl;
    
    return 0;
}