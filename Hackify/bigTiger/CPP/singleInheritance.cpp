// Single Inheritance
// A -> B 

#include<iostream>
using namespace std;

class Parent
{
    public:
        void ParentQuality()
        {
            cout << "Singing" << endl;
        }
};

class Child : public Parent
{
    public:
        void ChildQuality()
        {
            cout << "Dancing" << endl;
        }
};

int main()
{
    // Parent Jethalal;
    // Jethalal.ParentQuality();

    Child Tappu;
    Tappu.ChildQuality();
    Tappu.ParentQuality();
    return 0;
}