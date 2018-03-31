#pragma once

#include "AbstractComparator.h"

class SquareComparator :public IComparator
{
    public:
        static bool Compare(long A, long B);
};
