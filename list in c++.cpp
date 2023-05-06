#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//function for printing the elements in a list
void showlist(list <int> a)
{
    list <int> :: iterator it;
    for(it = a.begin(); it != a.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{

    list <int> a1list1, a2list2;


    for (int i = 0; i < 10; ++i)
    {
        a1list1.push_back(i * 2);
        a2list2.push_front(i * 3);
    }
    cout << "\nList 1 (a1list1) is : ";
    showlist(a1list1);

    cout << "\nList 2 (a2list2) is : ";
    showlist(a2list2);

    cout << "\na1list1.front() : " << a1list1.front();
    cout << "\na1list1.back() : " << a1list1.back();

    cout << "\na1list1.pop_front() : ";
    a1list1.pop_front();
    showlist(a1list1);

    cout << "\na2list2.pop_back() : ";
    a2list2.pop_back();
    showlist(a2list2);

    cout << "\na1list1.reverse() : ";
    a1list1.reverse();
    showlist(a1list1);

    cout << "\na2list2.sort(): ";
    a2list2.sort();
    showlist(a2list2);

    return 0;

}
