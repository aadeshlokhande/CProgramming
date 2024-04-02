// consturctor 

// #include<iostream>
// using namespace std;
// class Greet
// {
//     public:
//         void sayHello()
//         {
//             cout << "Hello Guys"<< endl;
//         }
// };



// int main()
// {
//     Greet Harshit;
//     Harshit.sayHello();
//     return 0;
// }

// ==============================================
// #include<iostream>
// using namespace std;
// class Greet
// {
//     public:
//         Greet()
//         {
//             cout << "Hello Guys"<< endl;
//         }
// };

// int main()
// {
//     Greet Harshit, atharva, premraj, aadesh;
    
//     return 0;
// }



#include<iostream>
using namespace std;
class Abc
{
    private:
        int a,b;
    public:
        Abc(int a1,int b1)
        {
            a = a1;
            b = b1;
        }

        void sum()
        {
            cout<< a+b << endl;
        }

        void sub()
        {
            cout<< a-b << endl;
        }

        void multi()
        {
            cout<< a*b << endl;
        }

        void div()
        {
            cout<< a/b << endl;
        }

};


int main()
{
    Abc ob1(10,20), ob2(11,22), ob3(33,44);
    ob2.multi();
    ob3.sub();
    return 0;
}
