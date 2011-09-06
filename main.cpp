//#include "m/m_incl.h"
#include "vector.h"

int main() {
    //kjb_init();
/*
    auto_ptr<vector> p(new vector);
    
    *p = 134;
    
    //cout << p << endl;
    cout << *p << endl;
*/

    vector v(10, 0);
    
    v[0] = 12.34567;
    v[2] = -15835;
    
    for(int i=0; i<10; i++)
        cout << v[i] << endl;

    return 0;
}