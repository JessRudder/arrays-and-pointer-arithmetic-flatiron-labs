#include <stdio.h>
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  printf("%p %p %p", &arr[0], &arr[1], &arr[2]);
  return 0;
}
