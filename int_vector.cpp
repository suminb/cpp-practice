#include "int_vector.h"

int_vector::int_vector(int length) {
    kjb_c::get_zero_int_vector(&this->impl, length);
}

int_vector::~int_vector() {
    kjb_c::free_int_vector(this->impl);
}

int int_vector::length() {
    return this->impl->length;
}

int& int_vector::operator[] (const int index) {
    // TODO: To check if index is out of boundary
    return this->impl->elements[index];
}
        
int_vector int_vector:: operator+ (const int_vector v) {
    int_vector t = int_vector(this->length());
    
    kjb_c::add_int_vectors(&t.impl, this->impl, v.impl);
    
    return t;
}