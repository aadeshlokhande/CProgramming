// Constructor 

// #include<iostream>
// using namespace std;
// class Greet
// {
//     public:
//     Greet()
//     {
//         cout << "Hello guys = " << endl;
//     }
// };

// int main()
// {
//     Greet obj, obj1, obj2;
//     // obj.hello();

//     return 0;
// }




// #include<iostream>
// using namespace std;
// class Greet
// {
//     public:
//     Greet(string a)
//     {
//         cout << a << endl;
//     }
// };

// int main()
// {
//     Greet obj("Hello"), obj1("mitro"), obj2("zal ka j1");
//     // obj.hello();

//     return 0;
// }



// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


#include<iostream>
using namespace std;

class ICE
{
    private:
        int feesPaid,a,b,c;

    public:
        int age;
        ICE(int fp, int a1,int b1, int c1, int Age)
        {
            feesPaid = fp;
            a = a1;
            b = b1;
            c = c1;
            age = Age;
        }
        void printData()
        {
            cout << feesPaid << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            cout << age << endl;
        }
};

int main()
{
    ICE om(1200, 10,20,30,19), pranit(1300,11,22,33,20), shreyash(700, 12,23,34,18);



    pranit.printData();
    return 0;
}




