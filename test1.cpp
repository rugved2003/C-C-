#include<iostream>
using namespace std;
int main()
{
    int div, sub;

    cout<<("Enter the class obtained by the student: ");
    cin>>("%d", div);

    cout<<("Enter the number of subject in which he has failed: ");
    cin>>("%d", sub);

    switch(div)
    {
        //for first class students
        case 1:
            if(sub<=3)
                cout<<("He got the grace of %d marks",5*sub);
            else
                cout<<("He didn't get any grace");
        break;

        //for second class student
        case 2:
            if(sub<=2)
                cout<<("He got the grace of %d marks",4*sub);
            else
                cout<<("He didn't get any grace");
        break;
        //for third class students
        case 3:
            if(sub<=1)
                cout<<("He got the grace of %d marks",5*sub);
            else
                cout<<("He didn't get any grace");
        break;

    }

}
