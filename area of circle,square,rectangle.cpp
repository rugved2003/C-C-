#include <iostream>
using namespace std;
void circle();
void square();
void rectangle();
int main()
{
    int choice;
    do{
    cout<<"\npick one: \n1. circle\n2. square\n3. rectangle\n4. quit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: circle();
                break;
        case 2: square();
                break;
        case 3: rectangle();
                break;
        case 4: exit(0);
                break;
        deafult:cout<<"invalid choice";
    }
    }while(choice < 4);

}
//for circle
void circle()
{
    int r;
    cout<<"\nEnter the radius: "<<endl;
    cin>>r;
    float area = 3.14*r;
    cout<<"\nThe area of the circle is : "<<area<<endl;
}
//for sqaure
void square()
{
    int a;
    cout<<"\nEnter the length of a side: "<<endl;
    cin>>a;
    float area = a*a;
    cout<<"\nThe area of the square is : "<<area<<endl;
}
//for rectangle
void rectangle()
{
    int l,b;
    cout<<"\nEnter the length  and breadth: "<<endl;
    cin>>l>>b;
    float area = l*b;
    cout<<"\nThe area of the square is : "<<area<<endl;
}

