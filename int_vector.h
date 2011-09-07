#include "l/l_int_vector.h"
#include <iostream>
#include <string>

using namespace std;

class int_vector {

    //private:
    public:
        struct kjb_c::Int_vector *impl;
        
    public:
        int_vector(int length);
        ~int_vector();
        
        int length();
        string str();
        
        int& operator[] (const int index);
        int_vector operator+ (const int_vector);
        int_vector operator- (const int_vector);
        int_vector operator* (const int_vector); // dot product?
        
        friend ostream& operator<<(ostream &out, int_vector &v);
};
