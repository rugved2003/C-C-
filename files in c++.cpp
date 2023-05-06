#include<iostream>
#include <fstream>
using namespace std;
class emp
{
    int empid;
    char empname[20];
    public:
        void getemp()
        {
            cout<<"enter emp id"<<endl;
            cin>>empid;
            cout<<"enter emp name"<<endl;
            cin>>empname;
        }


};
int main()
{
    emp e;
    ofstream f;
    f.open("rugved",ios::out);
    do
    {
         e.getemp();
        f.write((char *)&e,sizeof(e));
        cout<<"written to a file"<<endl;
        cout<<"enter y to write again"<<endl;
        cin>>y;

    }while

    f.close();
    return 0;
}



