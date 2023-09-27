#include "sort.hpp"

void insertionSort(int arr[], int n) {
  int j, key;
  for (int i = 1; i < n; ++i) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

void selectionSort(int arr[], int n) {
  int min, temp;
  for (int i = 0; i < n - 1; ++i) {
    min = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[min])
        min = j;
    }
    if (min != i) {
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }
}
