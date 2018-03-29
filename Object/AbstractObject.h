class AbstractObject
{
    public:
        AbstractObject();
        virtual ~AbstractObject();
        virtual void Move(Coordinate newPosition) = 0;
        virtual void Print() = 0;
};

AbstractObject::AbstractObject() {}
AbstractObject::~AbstractObject() {}
