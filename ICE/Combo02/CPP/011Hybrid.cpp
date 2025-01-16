#include<iostream>
using namespace std;
class A
{
   public:
   A()
   {
       cout<<"This is A"<<endl;
   }
};

class B :  public A 
{
   public:
   B()
   {
       cout<<"This is B"<<endl;
   }
};

class C :  public A
{
   public:
   C()
   {
       cout<<"This is C"<<endl;
   }
};

class D :  public A
{
   public:
   D()
   {
       cout<<"This is D"<<endl;
   }
};

class E :  public B, public D
{
   public:
   E()
   {
       cout<<"This is E"<<endl;
   }
};

class F :  public D
{
   public:
   F()
   {
       cout<<"This is F"<<endl;
   }
};

class G : public F
{
   public:
   G()
   {
       cout<<"This is G"<<endl;
   }
};

class H : public F
{
   public:
   H()
   {
       cout<<"This is H"<<endl;
   }
};

class I : public F
{
   public:
   I()
   {
       cout<<"This is I"<<endl;
   }
};

class J : public G, public H
{
   public:
   J()
   {
       cout<<"This is J" <<endl;
   }
};
int main()
{
    A ob;
    return 0;
}