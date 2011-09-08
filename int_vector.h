#ifndef INT_VECTOR_H
#define INT_VECTOR_H

#include "l/l_incl.h" 
#include <iostream>
#include <string>

using namespace std;

class int_vector {

    private:
        int retain_count;
        
    public:
        // Can this be public?
        struct kjb_c::Int_vector *impl;
        
    public:
        int_vector(int length);
        int_vector(const int_vector& v);
        ~int_vector();
        
        int length() {
            return this->impl->length;
        }
        string str();
        
        int& operator[] (const int index);
        
        int_vector& operator+= (const int_vector&);

        int_vector operator- (const int_vector);
        int_vector operator* (const int_vector); // dot product?
        
        friend ostream& operator<<(ostream &out, int_vector &v);
        
        
        // TODO: Refactor the following two functions
        int_vector* retain();
        int_vector* release();
};

int_vector operator+ (const int_vector& v1, const int_vector& v2);

#endif // INT_VECTOR_H