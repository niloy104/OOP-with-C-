#include <bits/stdc++.h>
using namespace std;
//Fuction overloading in polymorphism
class Example
{
public:
    int add(int x, int y)
    {
        cout << "Integer one: ";
        return x + y;
    }
    double add(double x, double y)
    {
        cout << "Double one: ";
        return x + y;
    }
    void add(char a)
    {
        cout << "Hi " << a << endl;
    }
};

int main()
{
    Example ex;
    ex.add('a');
}