// destructor 

// #include<iostream>
// using namespace std;

// class Abc
// {
//     public:
//     Abc()
//     {
//         cout<< "Hello\n";
//     }

//     ~Abc()
//     {
//         cout<< "Bye Bye\n";
//     }
// };

// int main()
// {
//     Abc ob1;
//     cout<<"aadesh\n";
//     return 0;
// }


// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


#include<iostream>
using namespace std;

int a = 0;

class Abc
{
    public:
    Abc()
    {
        ++a;
        cout<< "cons call for obj"<<a << endl;
    }

    ~Abc()
    {
        cout<< "des call for obj"<<a<< endl;
        --a;
    }
};

int main()
{
    Abc ob1;
    {
        Abc ob2;
        {
            Abc obj3;
            cout << "Hello Aadesh\n";
            {
                Abc obj4;asd.c
            }
        }
    }
}