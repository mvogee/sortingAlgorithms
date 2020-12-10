#include "header.hpp"

void swap (int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}

void insertionSort(int arr[], int length) {
  int hold;
  for (int i = 1; i < length; i++) {
    for (int j = i; arr[j] < arr[j - 1] && j > 0; j--) {
      swap(arr[j], arr[j - 1]);
    }
  }
}
