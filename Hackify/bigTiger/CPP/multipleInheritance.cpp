// multiple inheritance 
// A,B -> C


#include<iostream>
using namespace std;

class Mom
{
    public:
        void MomQuality()
        {
            cout << "Makeup" << endl;
        }
};

class Dad
{
    public:
        void DadQuality()
        {
            cout << "driving" << endl;
        }
};


class Child : public Mom, public Dad
{
    public:
        void ChildQuality()
        {
            cout << "Study" << endl;
         }
};


int main()
{
    // Dad Jethalal;
    // Jethalal.DadQuality();

    // Mom Daya;
    // Daya.MomQuality();
    
    Child Tappu;
    Tappu.ChildQuality();
    Tappu.MomQuality();
    Tappu.DadQuality();

    return 0;
}