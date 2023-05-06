#include<iostream>
using namespace std;
class REPORT
{
	int adno;
	char name[20];
	float marks[5];
	float average;
	void GETAVG()
	{
		average = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
	}
public:
	void READINFO();
	void DISPLAYINFO();
};
void REPORT::READINFO()
{
	do
	{
		cout<<"Enter 4 digit admission number : ";
		cin>>adno;
	}while(adno<999 || adno>10000);
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter marks in ";
	for(int i=0;i<5;i++)
	{
		cout<<"Subject "<<i+1<<":";
		cin>>marks[i];
	};
	GETAVG();
}
void REPORT::DISPLAYINFO()
{
	cout<<"Admission number:"<<adno<<" Name:"<<name<<" Marks are:"<< marks[0]<<" "<< marks[1]
	<<" "<<marks[2]<<" "<< marks[3]<<" "<< marks[4]<<" Average:"<<average;
}
int main()
{
	REPORT obj;
	obj.READINFO();
	obj.DISPLAYINFO();
	return 0;
}
