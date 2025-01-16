// heirarchical inheritance


#include<iostream>
using namespace std;
class Parent
{
    public:
    void ParentQuality()
    {
        cout << "Singing"<<endl;
    }
};

class Child1 : public Parent
{
    public:
    void Child_1_Quality()
    {
        cout << "Guitar"<<endl;
    }
};

class Child2 : public Parent
{
    public:
    void Child_2_Quality()
    {
        cout << "Dancing"<<endl;
    }
};

int main()
{
    // Parent ramlal;
    // ramlal.ParentQuality();
    cout<<"**********shamlal*********\n";
    Child1 shamlal;
    shamlal.ParentQuality();
    shamlal.Child_1_Quality();

    cout<<"**********harilal*********\n";

    Child2 harilal;
    harilal.ParentQuality();
    harilal.Child_2_Quality();
    return 0;
}

