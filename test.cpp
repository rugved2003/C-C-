// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student
{
    int id;
    int sub[6];
    char name[20];
    public:
    void get();
    void put();
};
void student::get()
{
    cout<<"enter student id and name"<<endl;
    cin>>id>>name;
    cout<<"enter each subject marks "<<endl;
    for(int i =0;i<6;i++)
    {
        cin>>sub[i];
    }
}
void student::put()
{
    int total =0;
    for(int i=0;i<6;i++)
    {
        total = total+sub[i];
    }
    cout<<"the total marks are"<<total<<endl;
    cout<<"the student resut is "<<endl;
    {
    for(int i =0;i<6,i++)
    }
    {
        if (subj[i]<40)
        {
            //cout<<"the student failed"<<endl;
            flag=0;
            break;
        }
     }
     if(flag==1)
     cout<<"the student i passed"<<endl;
     else
}
int main()
{
    student s;
    s.get();
    s.put();
}
    return 0;
}
