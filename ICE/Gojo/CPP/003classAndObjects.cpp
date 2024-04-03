// class and objects

// class className
// {
//     private:
//         -------
//     public: 
//         -------
// };

// int main()
// {
//     className object;

// }
// ========================================


#include<iostream>
using namespace std;

class ICE
{
    private:
        int feesPaid,a,b,c;

    public:
        int age;
        void getData(int fp, int a1,int b1, int c1)
        {
            feesPaid = fp;
            a = a1;
            b = b1;
            c = c1;
        }
        void printData()
        {
            cout << feesPaid << endl;
            cout <<a << endl;
            cout <<b << endl;
            cout <<c << endl;
            cout <<age << endl;
        }
};

int main()
{
    ICE om, pranit, shreyash;
    om.age = 19;
    pranit.age = 20;
    shreyash.age = 18;

    om.getData(1200, 10,20,30);
    pranit.getData(1300,11,22,33);
    shreyash.getData(700, 12,23,34);

    shreyash.printData();
    return 0;
}