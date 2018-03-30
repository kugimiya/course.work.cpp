#pragma once

class IComparator
{
    public:
        IComparator() {}
        ~IComparator() {}

        virtual bool Compare() = 0;
};
