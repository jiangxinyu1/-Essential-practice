#include "Triangular.h"

Triangular& Triangular::copy(const Triangular &rhs)
{
    if ( this != &rhs )
    {
        _length = rhs._length;
        _beg_pos = rhs._beg_pos;
        _next = rhs._beg_pos - 1;
    }
    return *this;
}