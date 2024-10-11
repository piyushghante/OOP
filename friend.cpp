#include <bits/stdc++.h>

using namespace std;
class sales
{
private:
    int sales_total;

public:
    void set(int sales_total)
    {
        this->sales_total = sales_total;
    }
    int get()
    {
        return sales_total;
    }
    friend class ac;
};
class ac
{
private:
    int profit_margin;

public:
    void set(int profit_margin)
    {
        this->profit_margin = profit_margin;
    }
    void calculate_profit(sales &a)
    {
        int k = a.get();
        cout << profit_margin * k;
    }
};
int main()
{
    sales s;
    s.set(100);
    s.get();
    ac a;
    a.set(10);
    a.calculate_profit(s);
}