#include <iostream>
using namespace std;
class LIST{
 public:
 int a;
 virtual void store(){
 cout<<"Base class store ";
 cin>>a;
 }
 virtual void retrive(){
 cout<<"\nBase class retrive "<<a<<endl;
 }
};
class stack: public LIST{
 public:
 void store(){
 cout<<"derived class stack store ";
 cin>>a;
 }
 void retrive(){
 cout<<"\nderived class stack retrive "<<a<<endl;
 }
};
class queue: public LIST{
 public:
 void store(){
 cout<<"derived class queue store ";
 cin>>a;
 }
 void retrive(){
 cout<<"\nderived class queue retrive "<<a<<endl;
 }
};
int main()
{
 LIST *P;
 LIST objl;
 stack objs;
 queue objq;
 P=&objl;
 P->store();
 P->retrive();
 P=&objs;
 P->store();
 P->retrive();
 P=&objq;
 P->store(); P->retrive();
 return 0;
}
