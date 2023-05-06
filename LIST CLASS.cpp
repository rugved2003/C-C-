#include <iostream>
using namespace std;
class LIST{
 public:
 int a;
 virtual void store(){
 cout<<"Base class store :";
 cin>>a;
 }
 virtual void retrieve(){
 cout<<"\nBase class retrieve: ";
 cin>>a;
 }
};
class stack: public LIST{
 public:
 void store(){
 cout<<"\nderived class stack store: ";
 cin>>a;
 }
 void retrieve(){
 cout<<"\nderived class stack retrieve: ";
 cin>>a;
 }
};
class queue: public LIST{
 public:
 void store(){
 cout<<"\nderived class queue store: ";
 cin>>a;
 }
 void retrieve(){
 cout<<"\nderived class queue retrieve: ";
 cin>>a;
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
 P->retrieve();
 P=&objs;
 P->store();
 P->retrieve();
 P=&objq;
 P->store(); P->retrieve();
 return 0;
}
