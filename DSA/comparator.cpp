#include <bits/stdc++.h>
using namespace std;
class A
{

public:
    void hii()
    {
        cout << "hii 1";
    }
};
class B
{

public:
    void hii()
    {
        cout << "hii 1";
    }
};
class C : public A, public B
{

public:
};
int main(int argc, char const *argv[])
{
    C c;
    c.A::hii();
    return 0;
}
