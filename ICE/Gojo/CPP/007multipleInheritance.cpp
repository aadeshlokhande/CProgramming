// // multiple inheritance

// #include<iostream>
// using namespace std;

// class Daddy
// {
//     public:
//     void DaddyQuality()
//     {
//         cout << "paisa kamana" << endl;
//     }
// };

// class Mummy
// {
//     public:
//     void MummyQuality()
//     {
//         cout << "Ghar sambhalna"<<endl;
//     }
// };


// class Child : public Mummy, public Daddy
// {

//     public:
//         void ChildQuality()
//         {
//             cout << "mar khana"<< endl;
//         }
// };


// int main()
// {
//     // Daddy harilal;
//     // harilal.DaddyQuality();

//     // Mummy gitabai;
//     // gitabai.MummyQuality();

//     Child vanshu;
//     vanshu.DaddyQuality();
//     vanshu.MummyQuality();
//     vanshu.ChildQuality();

//     return 0;
// }