#include <stdio.h>

void hello_memory_addresses();
int array_length();

// Welcome to C! To compile your program, run `gcc arrays.c`. This will create
// a file called "a.out". Run this program, i.e. "./a.out".

// Return the length of "array" using the sizeof function. sizeof takes a
// single argument and returns the size of the argument in bytes.
int array_length() {
  int array[100];
  int length;

  // TODO: calculate array length.
  length = 0;

  return length;
}

// User pointer arithmetic to access array values. (no using array[11234] !)
int pointer_arithmetic(int index) {
  int element;
  int array[100] = {31, 31, 97, 9, 48, 56, 92, 12, 48, 38, 3, 25, 5, 91, 40, 25, 58, 83, 98, 22, 55, 4, 65, 80, 78, 73, 61, 8, 39, 53, 14, 60, 78, 78, 59, 36, 41, 0, 51, 25, 24, 34, 8, 25, 13, 38, 96, 35, 54, 25, 37, 10, 28, 12, 60, 77, 0, 53, 83, 36, 53, 91, 62, 6, 77, 27, 41, 37, 48, 88, 67, 75, 81, 41, 9, 86, 58, 79, 41, 91, 47, 95, 60, 41, 21, 49, 40, 26, 80, 39, 9, 39, 4, 39, 70, 69, 3, 33, 83, 67};

  // TODO: retrieve the array element using pointer arithmetic
  element = 0;

  return element;
}

void hello_memory_addresses() {
  int arr[5] = {1, 2, 3, 4, 5};

  // & gets the memory address of a value
  printf("%p %p %p\n", &arr[0], &arr[1], &arr[2]);
}

int main() {
  hello_memory_addresses();

  if(array_length() == 100) {
    printf("array_length() passed!\n");
  } else {
    printf("array_length() failed!\n");
  }

  if(pointer_arithmetic(56) == 0 && pointer_arithmetic(92) == 4) {
    printf("pointer_arithmetic() passed!\n");
  } else {
    printf("pointer_arithmetic() failed!\n");
  }

  return 0;
}
