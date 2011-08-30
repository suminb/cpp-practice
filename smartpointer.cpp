#include "smartpointer.h"

vector::vector(int len, double initial_value) {
    this->length = len;
    this->values = new double[len];

    // TODO: Need to initialize vector elements to be initial_value
    
    for(int i=0; i<len; i++) {
        this->values[i] = i;
    }
}

vector::~vector() {
    cout << "deconstructor is called." << endl;
}

double vector::operator[] (const int index) {
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
    
    for(int i=0; i<10; i++)
        cout << v[i] << endl;

    return 0;
}