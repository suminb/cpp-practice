#include "smartpointer.h"

vector::vector(int len, double initial_value) {
    // TODO: Need to make sure len is non-negative nor too big.
    
    this->length = len;
    this->values = new double[len];

    // TODO: Maybe memset() works better for this, if a consecutive allocation is guaranteed when this->values is initialized with the 'new' keyword.
    for(int i=0; i<len; i++) {
        this->values[i] = initial_value;
    }
}

vector::~vector() {
    delete this->values;
}

double& vector::operator[] (const int index) {
    return this->values[index];
}

int main() {
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