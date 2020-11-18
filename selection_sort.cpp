#include <iostream>

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
}

void selectionSort(int arr[], int length) {
  int index_min;
  for (int i = 0; i < length; i++) {
    index_min = i;
    for (int j = i + 1; j < length; j++) {
      if (arr[index_min] > arr[j]) {
        index_min = j;
      }
    }
    if (index_min != i) {
      int hold = arr[i];
      arr[i] = arr[index_min];
      arr[index_min] = hold;
    }
  }
}

int main() {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, n);
  printArray(arr, n);
  int arr2[] = {8,9,7,6,5,4,3,2,1,10,11,15,14,12,13,14,15,15};
  n = sizeof(arr2) / sizeof(arr2[0]);
  selectionSort(arr2, n);
  printArray(arr2, n);
}
