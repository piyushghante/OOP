#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A method" << endl;
    }
};

class B : public A
{
};
class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
    obj.show(); // Error: Ambiguity, compiler doesn't know which `show()` to call
    return 0;
}
