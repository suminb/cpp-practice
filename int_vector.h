#include "l/l_int_vector.h"

class int_vector {

    private:
        struct kjb_c::Int_vector *v;
        
    public:
        int_vector(int length);
        ~int_vector();
        
        int length();
        
        int_vector operator+ (const int_vector);
        int_vector operator- (const int_vector);
        int_vector operator* (const int_vector); // dot product?
};
