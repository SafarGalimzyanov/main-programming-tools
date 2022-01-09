/*
#include <iostream>

struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
    protected:
    Foo(const char *msg) : msg(msg) { }
    private:
    const char *msg;
};

 void foo_says(const Foo &foo) { foo.say(); }
*/

struct Aue : public Foo
{
public:
    Aue(const char* msg) : Foo(msg) { }
};

Foo get_foo(const char* msg) {
    return Aue(msg);
}