#include <iostream>
// [3][4][1][5][2]

void bublesort(int *arr, int arr_len) {
  int tmp;
  bool swapped = true;

  tmp = 0;
  for (int i = 0; i < arr_len - 1 && swapped == true; i++) {
    swapped = false;
    for (int j = 0; j < arr_len - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        swapped = true;
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

int main() {
  int ar[10] = {4,2,3,1,5,8,9,7,6,10};
  int n = sizeof(ar)/sizeof(int);
  std::cout << n << "\n";
  bublesort(ar, n);
  for (int i = 0; i < n; i++) {
    std::cout << ar[i] << ", ";
  }
  std::cout << "\n";
  return (0);
}
