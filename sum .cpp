// program to  find sum of variable  using a function
#include <iostream>
using namespace std;
// declaring a function
int add(int a, int b) {
    return (a + b);
}
int main() {

    int sum;
    sum = add(100, 300);

    cout << "100 + 300 = " << sum << endl;

    return 0;
}
