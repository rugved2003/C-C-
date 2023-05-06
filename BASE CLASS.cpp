#include<iostream>
using namespace std;
class basic_info
{
private:
    string name;
    int rollno;
    string sex;
public:
    void getdata( );
    void display( );

};
void basic_info::getdata( )
{
     cout<<"Enter your name :";
     cin>>name;
     cout<<"Enter your Roll no: ";
     cin>>rollno;
     cout<<"enter your gender: ";
     cin>>sex;
}
void basic_info::display( )
{
     cout<<"--------------------------------"<<"\n";
     cout<<"Name: "<<name<<"\n";
     cout<<"Roll.Number: "<<rollno<<"\n";
     cout<<"gender: "<<sex<<"\n";
     cout<<"--------------------------------"<<"\n";
};
class physical_fit
{
private:
    float height;
    float weight;
public:
    void getdata1();
    void display1();
};

void physical_fit::getdata1( )
{

  cout<<"enter your Height: ";
  cin>>height;
  cout<<"enter your weight: ";
  cin>>weight;
}
void physical_fit::display1( )
{
   cout<<"--------------------------------"<<"\n";

   cout<<"Your height is: "<<height<<"\n";
   cout<<"Your weight is: "<<weight<<"\n ";
   cout<<"--------------------------------"<<"\n";
}
int main()
{
    basic_info s1;
    s1.getdata();
    s1.display();
    physical_fit p1;
    p1.getdata1();
    p1.display1();
    return 0;
}
