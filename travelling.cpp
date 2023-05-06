#include <iostream>
using namespace std;

class Tour//define class
{
    char TCode[5];
    int NoofAdults;
    int NoofKids;
    int Kilometres;
    float TotalFare;
    public: Tour ()
    {
        strcpy(TCode,"NULL");
        NoofAduts=0;
        NoofKids =0;
        Kilometres =0;
        TotalFare=0;
    }
    void AssignFare()//define void
    {
        int i,j;
        TotalFare=0;
        for(i=0;i=1000)
        TotalFare+=500;
        else if(Kilometeres>=500)
        TotalFare+=300;
        else TotalFare+=200;
    }
        for(i=0;j=1000)
        TotalFare+=500/2;
        else if(Kilometeres>=500)
            TotalFare+=300/2;
        else
        TotalFare+=200/2;
    }  void EnterTour()//define void

    {
        cout<<"Enter value of travel code:";
        cin>>TCode; cout<<"Enter No. of Adults:";
        cin>>NoofAdults;
        cout<<"Enter No. of Children:";
        cin>> NoofKids;
        cout<<"Enter Distance:";
        cin>> Kilometeres;
        AssignFare();

    }

        void ShowTour()
        {
            cout<<"Travel code:"<TCode<<endl;
            cout<<"no of adults"<NoofAdults<<endl;
            cout<<"No of kid"<<Noofkods<<endl;
            cout<<"distance"<<TotalFare<<endl;
        }
    };
 {

    int main()
     a.AssignFare();
     a.EnterTour();
     a.ShowTour();

 return0;

 }




