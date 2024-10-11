#include <bits/stdc++.h>

using namespace std;

class baseclass
{
private:
    int data;

public:
    void set_data()
    {
        data = 0;
    }
    void get_data()
    {
        cout << data << "\n";
    }

protected:
    void show()
    {
        data = 2;
        cout << "Changes data to " << data;
    }
};

class drivedclass1 : public baseclass
{
};
class drivedclass2 : protected baseclass
{
public:
    void show1()
    {
        set_data();
        get_data();
        show();
    }
};
class drivedclass3 : private baseclass
{
public:
    void show1()
    {
        set_data();
        get_data();
        show();
    }
};

int main()
{
    drivedclass3 ds;
    ds.show1();

    return 0;
}