#include "int_vector.h"
#include <sstream>

int_vector::int_vector(int length) {
    this->retain_count = 1;
    kjb_c::ra_get_target_int_vector(&this->impl, length);
}

int_vector::~int_vector() {
    this->retain_count -= 1;
    
    if(this->retain_count <= 0)
        kjb_c::free_int_vector(this->impl);
}

int int_vector::length() {
    return this->impl->length;
}

string int_vector::str() {
    stringstream out;
    int len = this->length();
    
    for(int i=0; i<len; i++) {
        out << this->impl->elements[i]; // I tried this[i] but it wouldn't work.
        if(i < len-1) out << ", ";
    }
    return out.str();
}

int& int_vector::operator[] (const int index) {
    // TODO: To check if index is out of boundary
    return this->impl->elements[index];
}
        
int_vector int_vector::operator+ (const int_vector v) {
    int_vector t = int_vector(this->length());
    
    cout << "t = " << t << endl;
    
    //kjb_c::add_int_vectors(&t.impl, this->impl, v.impl);
    
    t.retain();
    return t;
}

ostream& operator<< (ostream &out, int_vector &v) {
    int len = v.length();
    
    for(int i=0; i<len; i++) {
        out << v.impl->elements[i]; // I tried this[i] but it wouldn't work.
        if(i < len-1) out << ", ";
    }
    
    return out;
}


int_vector* int_vector::retain() {
    this->retain_count += 1;
    
    return this;
}

int_vector* int_vector::release() {
    this->retain_count -= 1;
    
    return this;
}
