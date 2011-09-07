#include <iostream>
#include <memory>

#include "m/m_vector.h"

using namespace std;

class vector {
    double v;

private:
    int length;
    double *values;

public:
    vector(int len, double initial_value);
    ~vector();
    
    //static vector copy(vector* v);
    
    double& operator[] (const int index);
    //vector& operator+ (const vector v);
};
