#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int a;
  cout << "Masukan jumlah buku: ";
  cin >> a;
  string buku[a];
  for (int b = 0; b < a; b++){
    cout << "Masukan judul buku ke-" << b+1 << ": ";
    cin >> buku[b];
  }
  for (int b = 1; b < a; b++){
    string key = buku[b];
    int c = b - 1;
    while (c >= 0 && key < buku[c]){
      buku[c + 1] = buku[c];
      c--;
    }
    buku [c + 1] = key;
    }
    cout << "\nData buku yang sudah diurutkan:\n";
    for (int b = 0; b < a; b++){
      cout << b+1 << ". " << buku[b] <<endl;
  }
  return 0;
}