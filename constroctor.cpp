#include <bits/stdc++.h>

using namespace std;
class car
{
    int year;
    string name;

public:
    // default
    car()
    {

        year = 0;
        name = "Unknown";
        cout << "Default";
    }
    // parameterized
    car(int year_n, string model_n)
    {
        year = year_n;
        name = model_n;
        cout << "para";
    }
    // copy
    car(car &meth)
    {
        year = meth.year;
        name = meth.name;
        cout << "copy";
    }

    car(car &&meth)
    {
        year = meth.year;
        name = meth.name;
        meth.year = 0;
        meth.name = "Unknown";
        cout << "move";
    }
    void show()
    {
        cout << " " << year;
        cout << " " << name << "\n";
    }
};

int main()
{
    car car1;
    car1.show();
    car car2(2009, "TATA");
    car2.show();
    car car3(car2);
    car3.show();
    car car4 = move(car3);
    car4.show();
    car3.show();
}