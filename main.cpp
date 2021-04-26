#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Ming, " << age << " years old. \n";
}

int main() {
  myFunction("Changlei", 30);
  myFunction("Yue", 14);
  myFunction("Zhou", 30);
  return 0;
}