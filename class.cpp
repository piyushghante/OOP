#include <bits/stdc++.h>

using namespace std;

class car
{
public:
    string car_name = "Supra";
    int price = 1000;
    void print();
    string data_car = "Broken Breakes";
};

void car ::print()
{
    cout << car_name;
}
class car2 : public car
{
};

int main()
{
    car2 car1;
    car1.print();
    return 1;
}