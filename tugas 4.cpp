#include <iostream>
using namespace std;

int ambil(int prim, int i) {
  if (i == 1) {
    return 1;
  } else if (prim % i == 0) {
    return 1 + ambil(prim, --i);
  } else {
    return 0 + ambil(prim, --i);
  }
}

int cek(int bil) {
  if (bil > 1) {
    return (ambil(bil, bil) == 2);
  } else
    return false;
}

int main() {

  int bil;
  cout << "Masukan angka : ";
  cin >> bil;

  if (cek(bil)) {
    cout << "Bilangan Prima" << endl;
  } else {
    cout << "Bukan Bilangan Prima" << endl;
  }
  return 0;
}