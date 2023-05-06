#include<iostream>
using namespace std;
class Batsman
{
    char name[20];
    int runs_made,fours,sixes;
    public:
    void initial()
    {
        cout<<"enter the name : "<<endl;
        cin>>name;
        cout<<"enter the runs made : "<<endl;
        cin>>runs_made;
        cout<<"enter how many fours : "<<endl;
        cin>>fours;
        cout<<"enter how many sixes : "<<endl;
        cin>>sixes;
    }
    void update ()
    {
      int new_run,new_fours,new_sixes,cal_four,cal_six;
      cout<<"enter new runs made : "<<endl;
      cin>>new_run;
      cout<<"enter new fours made : "<<endl;
      cin>>new_fours;
      cout<<"enter new fours sixes : "<<endl;
      cin>>new_sixes;
      fours=fours + new_fours;
      sixes =sixes + new_sixes;
      cal_four=fours*4;
      cal_six=sixes*6;
      runs_made=runs_made + new_run + cal_four + cal_six;

      cout<<"total runs made : "<<runs_made<<endl;
      cout<<"number of fours: "<<fours<<endl;
      cout<<"number of sixes: "<<sixes<<endl;

    }
    void display()
    {
        cout<<"...........Batsman's information..........."<<endl;
        cout<<"Name : "<<name;
    }
};
int main()
{
    Batsman b1;
    b1.initial();
    b1.update();
    return 0;
}
