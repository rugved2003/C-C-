#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
char showmanue()
{
char operation;
cout<<"(a) choice for sum (+)";
cout<<"\n(b) choice for sub(-)";
cout<<"\n(c) choice for mul(*)";
cout<<"\n(d) choice div(/)";
cout<<"\n enter the operation with symbol that you want to perform  (+,-,*,/) : ";
cin>>operation;
return operation;
}
int sum(int a,int b)
{
int sum;
cout<<"enter the a :";
cin>>a;
cout<<"enter the b :";
cin>>b;
sum= a+b;
cout<<sum;
}
int sub(int a,int b)
{
int sub;
cout<<"enter the a :";
cin>>a;
cout<<"enter the b :";
cin>>b;
sub= a-b;
cout<<sub;
}
int mul(int a,int b)
{
int mul;
cout<<"enter the a :";
cin>>a;
cout<<"enter the b :";
cin>>b;
mul= a*b;
cout<<mul;
}
float div1(int a,int b)
{
float div1;
cout<<"enter the a :";
cin>>a;
cout<<"enter the b :";
cin>>b;
div1= a/b;
cout<<div1;
}
int main()
{
char ret;
ret=showmanue();
if (ret=='+')
{
int a,b;
sum(a,b);
}
else if (ret=='-')
{
int a,b;
sub(a,b);
}
else if (ret=='*')
{
int a,b;
mul(a,b);
}
else if (ret=='/')
{
float a,b;
div1(a,b);
}
}
