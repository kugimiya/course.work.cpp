#pragma once

class IComparator
{
    public:
        IComparator() = default;
        ~IComparator() = default;

        virtual bool Compare() = 0;
};
