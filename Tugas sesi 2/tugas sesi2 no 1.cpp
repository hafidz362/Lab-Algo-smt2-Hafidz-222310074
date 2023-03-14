#include <iostream>
using namespace std;

// untuk pertukaran nilai
void swap(int arr[], int pos1, int pos2){
  int temp;
  temp = arr[pos1];
  arr[pos1] = arr[pos2];
  arr[pos2] = temp;
}
// partisi array
int partition (int arr[], int low, int high, int pivot){
  int i = low;
  int j = low;
  while (i<=high){
    if (arr[i]>pivot){
      i++;
    }
    else{
      swap(arr, i, j);
      i++;
      j++;
    }
  }
  return j-1;
}
// fungsi quicksort
void quicksort (int arr[], int low, int high){
  if (low<high){
    int pivot = arr[high];
    int pos = partition(arr, low, high, pivot);//pos : indeks partisi

    quicksort(arr, low, pos-1);//Quicksort sebelum partisi
    quicksort(arr, pos+1, high);//Quicksort setelah patisi
  }
}
// mengimput data dari array
int main() {
  int n;
  cout << "Tentukan panjang array: ";
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  // Array yang telah diurutkan
  quicksort(arr, 0, n-1);
  cout << "Berikut adalah array yang telah diurutkan: ";
  for (int i=0; i<n; i++){
    cout << arr[i] << "\t";
  }
}