#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{

    // empty map container
    map<int, int> mquiz1;

    // insert elements in random order
    mquiz1.insert(pair<int, int>(1, 40));
    mquiz1.insert(pair<int, int>(2, 30));
    mquiz1.insert(pair<int, int>(3, 60));
    mquiz1.insert(pair<int, int>(4, 20));
    mquiz1.insert(pair<int, int>(5, 50));
    mquiz1.insert(pair<int, int>(6, 50));
    mquiz1.insert(pair<int, int>(7, 10));

    // printing map mquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map mquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mquiz1.begin(); itr != mquiz1.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // assigning the elements from gquiz1 to gquiz2
    map<int, int> mquiz2(mquiz1.begin(), mquiz1.end());

    // print all elements of the map gquiz2
    cout << "\nThe map mquiz2 after"
         << " assign from mquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mquiz2.begin(); itr != mquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\nmquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    mquiz2.erase(mquiz2.begin(), mquiz2.find(3));
    for (itr = mquiz2.begin(); itr != mquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = mquiz2.erase(4);
    cout << "\nmquiz2.erase(4) : ";
    cout <<"\n"<< num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mquiz2.begin(); itr != mquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;

    // lower bound and upper bound for map gquiz1 key = 5
    cout << "mquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << mquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << mquiz1.lower_bound(5)->second << endl;
    cout << "mquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << mquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << mquiz1.upper_bound(5)->second << endl;

    return 0;
}
