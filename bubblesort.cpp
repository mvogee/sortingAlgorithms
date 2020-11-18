#include "header.hpp"

void bubblesort(int *arr, int arr_len) {
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
