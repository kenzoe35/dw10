#include "dw.h"

int linear_search(const int values[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (values[i] == target) {
      return i;
    }
  }
  return -1;
}
