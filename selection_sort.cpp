#include "header.hpp"

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
