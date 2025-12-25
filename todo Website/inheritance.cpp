// ************* Inheirtance ***********
// Single 
#include<iostream>
using namespace std;
class Parent
{
    public:
        int var = 100;
        void info()
        {
            cout << "I am a parent Class"<< endl;
        }
};

class Child : public Parent
{
    public:
    int childVar = 1212;
    void childInfo()
    {
        cout << "I am a child class\n";
    }
};

int main()
{
    Parent jethalal;
    Child Tappu;
    // jethalal.info();
    // cout << jethalal.var;

    Tappu.childInfo();
    cout << Tappu.childVar<< endl;
    Tappu.info();
    cout << Tappu.var<< endl;
    return 0;
}







// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// multiple 
// multilevel
// heirachical
