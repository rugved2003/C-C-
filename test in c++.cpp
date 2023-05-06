#include<iostream>
using namespace std;
class TEST{
    int Testcode;
    string Description;
    int NoCandidate;
    int CenterReqd;
    int CALCNTR(){
    return NoCandidate/100+1;
 }
public:
 void SCHEDULE();
 void DISPTEST();
};
void TEST::SCHEDULE()
{
    cout<<"Enter test Code: ";
    cin>>Testcode;
    cout<<"Enter description: ";
    cin>>Description;
    cout<<"Enter Number Candidate: ";
    cin>>NoCandidate;
    CenterReqd=CALCNTR();

}
void TEST::DISPTEST()
{
    cout<<"Test code is: "<<Testcode<<endl;
    cout<<"Description is: "<<Description<<endl;
    cout<<"Number of Candidate: "<<NoCandidate<<endl;
    cout<<"your CALCNTR: "<<CALCNTR()<<endl;

}
int main()
{
    TEST t;
    t.SCHEDULE();
    t.DISPTEST();
    return 0;
}
