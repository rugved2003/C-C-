#include<iostream>
using namespace std;
int main()
{
    int div, sub;

    cout<<"Enter the class obtained by the student: ";
    cin>>div;

    cout<<"Enter the number of subject in which he has failed: ";
    cin>>sub;

    switch(div)
    {
        //for first class students
        case 1:
            if(sub<=3)
                cout<<"Total no of grace  marks  he awarded : "<<5*sub;
            else
                cout<<"He didn't get any grace marks";
        break;

        //for second class student
        case 2:
            if(sub<=2)
                cout<<"Total no of grace  marks  he awarded :"<<4*sub;
            else
                cout<<"He didn't get any grace marks";
        break;
        //for third class students
        case 3:
            if(sub<=1)
                cout<<"Total no of grace  marks  he awarded :"<<5*sub;
            else
                cout<<"He didn't get any grace marks";
        break;

    }
    return 0;
}
