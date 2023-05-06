#include<iostream>
using namespace std;
class student
{
    char rollno[10];
    char name[10];
    float m1,m2,m3;
    float avg;
    public:
    void read_data();
    void compute();
    void display();
};
void student::get()
{
    cout<<"  Enter the Student Roll Number :";
    cin>>rollno;
    cout<<"  Enter the Student Name:";
    cin>>name;
    cout<<"  Enter the marks in three subjects:\n";
    cin>>m1>>m2>>m3;
}
void student::compute()
{
    avg=(m1+m2+m3)/3;
}
void  student::show()
{
    cout<<name<<"'s Details";
    cout<<"   ";
    cout<<"  Roll.no is "<<rollno;
    cout<<"\n   student Name is "<<name;
    cout<<"\n  Marks in subject 1 is "<<m1;
    cout<<"\n  Marks in subject 2 is "<<m2;
    cout<<"\n  Marks in subject 3 is "<<m3;
    cout<<"\n  Average mark of three subjects is "<<avg;
    cout<<" ";
}
int main()
{
    student s[10];
    int n,i;

    cout<<"\n  Enter the number of Students:";
    cin>>n;
    for(i=0;i<n;i++)
    s[i].read_data();
    for(i=0;i<n;i++)
    s[i].compute();
    for(i=0;i<n;i++)
    s[i].display();


}
