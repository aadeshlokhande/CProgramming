// Destructor 

// #include<iostream>
// using namespace std;

// class Abc
// {
//     public:
//         Abc()
//         {
//             cout << "Hello\n";
//         }

//         ~Abc()
//         {
//             cout << "bye bye\n";
//         }
// };

// int main()
// {
//     Abc a1;
//     cout << "aadesh\n";
//     return 0;
// }



// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

// #include<iostream>
// using namespace std;

// class Abc
// {
//     private:
//         int ob;
//     public:
//         Abc(int a)
//         {
//             ob = a;
//             cout << "cons call for ob"<<ob<<endl;
//         }
//         ~Abc()
//         {
//             cout << "des call for ob"<<ob<<endl;
//         }
// };

// int main()
// {
//     Abc a1(1);
//     {
//         Abc a2(2);
//         {
//             cout << "Aadesh\n";
//             Abc a3(3);
//             {
//                 Abc a4(4); 
//             } 
//             Abc a5(5);
//         }
//     }
//     return 0;
// }

