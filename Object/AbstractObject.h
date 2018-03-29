class AbstractObject
{
    public:
        AbstractObject();
        virtual ~AbstractObject();
        virtual void Move(int X, int Y);
        virtual void Print();
};

AbstractObject::AbstractObject() {}
AbstractObject::~AbstractObject() {}
void AbstractObject::Move(int X, int Y) {}
void AbstractObject::Print() {}