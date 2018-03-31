#include "TrianglePentagonStorage.h"

bool TrianglePentagonStorage::Compare()
{
    return SquareComparator::Compare(
        _Triangle.CalcSquare(),
        _Pentagon.CalcSquare()
    );
}
