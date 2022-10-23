#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int x;
    void sayHi()
    {
        cout << "Hi " << x;
    }
};
int main()
{
    Student rahim;
    rahim.x = 10;
    rahim.sayHi();
}