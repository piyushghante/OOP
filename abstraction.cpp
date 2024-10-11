#include <bits/stdc++.h>

using namespace std;

class shape
{
public:
    virtual void draw() = 0;
};
class rect : public shape
{
public:
    void draw() override
    {
        cout << "Rect";
    }
    void ok()
    {
        cout << "jell0";
    }
};

class cirlce : public shape
{
public:
    void draw(int k)
    {
        cout << "circle with a radis " << k;
    }
    void draw() override
    {
        cout << "circle";
    }
};

int main()
{
    shape *shap1 = new cirlce();
    shap1->draw();
}