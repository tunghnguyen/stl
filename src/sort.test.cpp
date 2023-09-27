#include "sort.hpp"
#include <iostream>

int main() {
  int a[] = {2, 4, 3, 5, 1};
  selectionSort(a, 5);
  for (int i = 0; i < 5; ++i) {
    std::cout << a[i];
  }
  return 0;
}
