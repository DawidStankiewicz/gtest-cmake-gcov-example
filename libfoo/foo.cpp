#include "ibar.h"
#include "foo.h"

Foo::Foo(IBar& bar)
    :m_bar(bar) {};

bool Foo::baz(bool useQux) {
    bool a = false;

    if ( true == a ) {
        int b = 0;
    }

    if (useQux) {
        return m_bar.qux();
    } else {
        return m_bar.norf();
    }
}

bool Foo::notCalled()
{
    return false;
}
