#include "int_vector.h"

int_vector::int_vector(int length) {
    kjb_c::get_zero_int_vector(&this->v, length);
}

int_vector::~int_vector() {
    kjb_c::free_int_vector(this->v);
}
        
int_vector int_vector:: operator+ (const int_vector) {

}