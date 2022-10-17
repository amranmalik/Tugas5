#include <iostream>
using namespace std;
int main() {
  int i, j, tinggi;
  cout << "  Program C++ Segitiga Bintang  " << endl;
  cout << "================================" << endl;

  cout << "\nInput tinggi segitiga:  ";
  cin >> tinggi;
  for (i = 1; i <= tinggi; i++) {
    for (j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
}