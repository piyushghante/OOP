#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    static int year;
};

int car::year = 0;
int main()
{
    car car1;
    car1.year++;
    cout << car1.year;
    car1.year++;
    cout << car1.year;
    car1.year++;
    cout << car1.year;
    car1.year++;
    cout << car1.year;
}