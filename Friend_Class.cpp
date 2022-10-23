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
    friend class ParentFriend;
};

class ParentFriend
{
public:
    void tellSecret(Parent *ptr)
    {
        cout << "Total amaount is: " << ptr->taka << endl;
        cout << "The password is: " << ptr->password << endl;
    }
};

int main()
{
    Parent pt(1500, 1234);
    ParentFriend fr;
    fr.tellSecret(&pt);
}