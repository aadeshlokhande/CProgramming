// friend Function

// #include<iostream>
// using namespace std;

// class Abc
// {
//     private:
//         int a, b;
//         friend void sum(Abc obj1);
//     public:
//         void getData(int a1, int b1)
//         {
//             a = a1;
//             b = b1;
//         };
// };

// void sum(Abc obj1)
// {
//     cout << obj1.a + obj1.b;
// }


// int main()
// {
//     Abc obj;
//     obj.getData(10,20);
//     sum(obj);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// Addition of Complex Values

// 3 + 9i -----> a1
// 6 + 7i -----> a2
// ------- 
// 9 + 16i

#include<iostream>
using namespace std;

class Complex
{
    private:
        friend Complex sum(Complex o1, Complex o2);
    public:
        int a,b;
        void getData(int a1, int b1)
        {
            a = a1;
            b = b1;
        }

        void printComplex()
        {
            cout << a <<" + "<< b << "i"<<endl;
        }
};

Complex sum(Complex o1, Complex o2)
{
    Complex lol;
    lol.getData(o1.a+o2.a, o1.b+o2.b);
    return lol;
}

int main()
{
    Complex c1,c2,ans;
    c1.getData(3,5);
    c2.getData(2,4);
    c1.printComplex();
    c2.printComplex();
    cout << "-------\n";
    ans = sum(c1,c2);
    ans.printComplex();
    return 0;
}