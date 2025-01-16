// multilevel inheritance

#include<iostream>
using namespace std;
class GrandParent
{
    public:
    void GrandParentQuality()
    {
        cout << "Daru pina"<<endl;
    }
};

class Parent : public GrandParent
{
    public:
    void ParentQuality()
    {
        cout << "marna pitna"<<endl;
    }
};

class Child : public Parent
{
    public:
    void ChildQuality()
    {
        cout << "ladkiya chedna"<<endl;
    }
};

int main()
{
    // GrandParent ramlal;
    // ramlal.GrandParentQuality();

    // Parent shamlal;
    // shamlal.ParentQuality();
    // shamlal.GrandParentQuality();

    Child harilal;
    harilal.GrandParentQuality();
    harilal.ParentQuality();
    harilal.ChildQuality();
    return 0;
}