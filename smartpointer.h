#include <iostream>
#include <memory>

using namespace std;

class vector {
    double v;

private:
    int length;
    double *values;

public:
    vector(int len, double initial_value);
    ~vector();
    
    double operator[] (const int index);
};
