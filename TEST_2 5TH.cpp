#include <iostream>
using namespace std;
class Person
{
    protected:
    char name[25];
    int age;
    virtual void get()=0;
};
class Student:protected Person
{
    protected:
    int roll;
    float fees;
};
class Teacher:protected Person
{
    protected:
    int id;
    float sal;
};
class Master:protected Teacher, protected Student
{
    public:
    string n;
    int a;
    void studentDet()
    {
        cout<<"Enter Roll Number:"<<endl;
        cin>>roll;
        cout<<"Enter Fees:"<<endl;
        cin>>fees;
        cout<<"\n";
        cout<<"Your Name is: "<<Student::name<<endl;
        cout<<"Your Age is: "<<Student::age<<endl;
        cout<<"Your Roll Number is: "<<roll<<endl;
        cout<<"Your Fees is: "<<fees<<endl;
    }
    void teacherDet()
    {
        cout<<"Enter ID:"<<endl;
        cin>>id;
        cout<<"Enter Salary:"<<endl;
        cin>>sal;
        cout<<"\n";
        cout<<"Your Name is: "<<n<<endl;
        cout<<"Your Age is: "<<Teacher::age<<endl;
        cout<<"Your ID is: "<<id<<endl;
        cout<<"Your Salary is: "<<sal<<endl;
    }
    void get()
    {
        cout<<"Enter Details"<<endl;
        cout<<"Enter Name:"<<endl;
        cin>>Student::name;
        cout<<"Enter Age:"<<endl;
        cin>>Student::age;
        n=Student::name;
        a=Student::age;
        Teacher::age=a;
        if(Student::age>30)
        {
            teacherDet();
        }
        else
        {
            studentDet();
        }
    }
};
int main()
{
    Master m;
    m.get();
    return 0;
}
