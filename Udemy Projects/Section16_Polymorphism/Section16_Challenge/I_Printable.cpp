#include "I_Printable.h"

ostream &operator<<(ostream &os, const I_Printable &rhs)
{
    rhs.print(os);
    return os;
}
