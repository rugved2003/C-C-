#include<iostream>
#include <fstream>
using namespace std;
class emp
{
    int empid;
    char empname[20];
    public:
        void putemp()
        {
            cout<<"enter emp id = "<<empid<<endl;
            cout<<"enter emp name = "<<empname<<endl;
        }


};
int main()
{
    emp e;
    fstream f;
    f.open("rugved",ios::in);
    f.read((char *)&e,sizeof(e));
    while(!f.eof())
    {
        e.putemp();
        f.read((char *)&e,sizeof(e));
    }
    f.close();
    return 0;
}
