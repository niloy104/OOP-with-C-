#include <bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int taka;

protected:
    int password;

public:
    Parent(int tk, int pass)
    {
        taka = tk;

        password = pass;
    }
    friend void tellSecret(Parent *ptr);
};

void tellSecret(Parent *ptr)
{
    cout << "Total amaount is: " << ptr->taka << endl;
    cout << "The password is: " << ptr->password << endl;
}

int main()
{
    Parent pt(1500, 1234);
    tellSecret(&pt);
}