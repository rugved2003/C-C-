#include <iostream>
using namespace std;

void display(int i) {
  cout << " entered number " << i << endl;
}
void display(double  f) {
  cout << "entered  float number   " << f << endl;
}
void display(char const *c) {
  cout << " entered char* " << c << endl;
}

int main() {
  display(10);
  display(10.10);
  display("hello");
  return 0;
}

