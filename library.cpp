#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
//defining the class
class book	{
private:
	char *author;
	char*title;
	char *publisher;
	float *price;
	int *stocks;
//Public
public:
	book()	{
	author= new char[20];
	title=new char[20];
	publisher=new char[20];
	price= new float;
	stocks=new int;
	}
	void feeddata();
	void showdata();
	int search(char[],char[]);
	void buybook();



};
//Getting Details From Customer
void book::feeddata()	{
	cin.ignore();
	cout<<"\nEnter Author Name: ";
	cin.getline(author,20);
	cout<<"Enter Title Name: ";
	cin.getline(title,20);
	cout<<"Enter Publisher Name: ";
	cin.getline(publisher,20);
	cout<<"Enter Price: ";
	cin>>*price;
	cout<<"Enter Stock Position: ";
	cin>>*stocks;

}

    void book:showdata()	{
        cout<<"\nAuthor Name: "<<author;
        cout<<"\nTitle Name: "<<title;
        cout<<"\nPublisher Name: "<<publisher;
        cout<<"\nPrice: "<<*price;
        cout<<"\nStock Position: "<<*stocks;

}

int book::search(char tbuy[20],char abuy[20] )	{
	if(strcmp(tbuy,title)==0 && strcmp(abuy,author)==0)
		return 1;
	else return 0;

}

void buybook()	{
	int count;
	cout<<"\nEnter Number Of copies to buy: ";
	cin>>count;
	if(count<=*stock)	{
		*stocks=*stock-count;
		cout<<"\nBooks Bought Sucessfully";
		cout<<"\nAmount: Rs. "<<(*price)*count;
	}
	else
		cout<<"\nSorry will serve later";
}

int main()	{
	stock s;
	s.book();


	return 0;
}
