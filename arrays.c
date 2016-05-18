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

void hello_memory_addresses() {
  int arr[5] = {1, 2, 3, 4, 5};

  // & gets the memory address of a value
  printf("%p %p %p\n", &arr[0], &arr[1], &arr[2]);
}

int main() {
  hello_memory_addresses();

  if(array_length() == 100) {
    printf("array_length() passed!");
  } else {
    printf("array_length() failed!");
  }

  return 0;
}
