#include <c++/6/iostream>
using namespace std;

class TestClass
{
    public:
        TestClass() {};
        void TestShout();
};

void TestClass::TestShout()
{
    cout << " сложно чото \n";
}


class TestClassFabric
{
    public:
        static TestClass getInstance();
};

TestClass TestClassFabric::getInstance()
{
    return TestClass();
}


int main(void)
{
    TestClass TestClassInstance = TestClassFabric::getInstance();
    TestClassInstance.TestShout();
    return 0;
}