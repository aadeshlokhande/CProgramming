// heirarcical inheritance

#include<iostream>
using namespace std;

class Parent
{
    public:
        void ParentQuality()
        {
            cout << "Singing" <<endl;
        }
};

class Child1 : public Parent
{
    public:
        void Child1Quality()
        {
            cout << "Dancing" <<endl;
        }
};

class Child2 :public Parent
{
    public:
        void Child2Quality()
        {
            cout << "Guitar" <<endl;
        }
};

int main()
{
    // Child1 chin1;
    // chin1.Child1Quality();
    // chin1.ParentQuality();

    Child2 chin2;
    chin2.Child2Quality();
    chin2.ParentQuality();
    
    return 0;
}