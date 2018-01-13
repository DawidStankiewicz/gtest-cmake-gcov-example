class IBar;

class Foo
{
public:
    Foo(IBar& bar);
    bool baz(bool useQux);

    bool notCalled();
protected:
    IBar& m_bar;
};
