#include <iostream>
using namespace std;

#include "AbstractObject.h"

class Triangle :public virtual AbstractObject
{
    public:
        Triangle();
        ~Triangle();
        void Move(int X, int Y);
        void Print();

    private:
        int X;
        int Y;
};

Triangle::Triangle() {}
Triangle::~Triangle() {}

void Triangle::Move(int _X, int _Y)
{
    X = _X;
    Y = _Y;
}

void Triangle::Print()
{
    cout << "This is triangle.\n";
    cout << "Top-left corner coordinates: [X: " << X << ", Y: " << Y << "]\n";
}