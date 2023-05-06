// Online C++ compiler to run C++ program online
//friend function
#include <iostream>
using namespace std;
class simple2;
class simple1
{
    int a;
    public:
    void geta()
    {
        cout<<"enter a value: ";
        cin>>a;
    }
    friend void max(simple1,simple2);

};
class simple2
{
    int b;
    public:
    void getb()
    {
         cout<<"enter a value: ";
         cin>>b;

    }
    friend void max(simple1,simple2);
};
void max(simple1 s1, simple2 s2)
{
    if(s1.a>s2.b)
    cout<<"a is max value";
    else if(s2.b>s1.a)
    cout<<"b is max valve";
    else
    cout<<"both are equal";
}
int main()
{
    simple1 s1;
    simple2 s2;
    s1.geta();
    s2.getb();
    max(s1,s2);


    return 0;
}
