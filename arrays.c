#include <stdio.h>

void hello_memory_addresses();
int array_length();
int pointer_arithmetic(int * array, int index);
int linear_search(int * array, int element, size_t length);
int binary_search(int * sorted_array, int element, size_t length);

// Welcome to C! To compile your program, run `gcc arrays.c`. This will create
// a file called "a.out". Run this program, i.e. "./a.out".

// Return the length of "array" using the sizeof function. sizeof takes a
// single argument and returns the size of the argument in bytes.
//
// Why isn't the array passed as an arg? Because of this:
// http://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
int array_length() {
  int arr[100] = {31, 31, 97, 9, 48, 56, 92, 12, 48, 38, 3, 25, 5, 91, 40, 25, 58, 83, 98, 22, 55, 4, 65, 80, 78, 73, 61, 8, 39, 53, 14, 60, 78, 78, 59, 36, 41, 0, 51, 25, 24, 34, 8, 25, 13, 38, 96, 35, 54, 25, 37, 10, 28, 12, 60, 77, 0, 53, 83, 36, 53, 91, 62, 6, 77, 27, 41, 37, 48, 88, 67, 75, 81, 41, 9, 86, 58, 79, 41, 91, 47, 95, 60, 41, 21, 49, 40, 26, 80, 39, 9, 39, 4, 39, 70, 69, 3, 33, 83, 67};
  int length;

  // TODO: calculate array length using sizeof.
  length = 0;

  return length;
}

// User pointer arithmetic to access array values. (no using array[11234] !)
int pointer_arithmetic(int * array, int index) {
  int element;

  // TODO: retrieve the array element using pointer arithmetic
  element = 0;

  return element;
}

// Write a simple loop to determine whether the array contains the provided
// element. In C, 1 is true and 0 is false. Return 1 if the array contains the
// element and 0 if not.
//
// Why is the array length passed in? Because of this:
// http://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
int linear_search(int * array, int element, size_t length) {
  // TODO: Write a simple loop to find the specified element.

  return 0;
}

// Implement binary serach to determine whether the array contains the provided
// element. In C, 1 is true and 0 is false. Return 1 if the array contains the
// element and 0 if not.
//
// Binary search is a O(log(n)) operation. Fabulous!
int binary_search(int * sorted_array, int element, size_t length) {
  // TODO: Write an implementation of binary search to find the given element.

  return 0;
}

void hello_memory_addresses() {
  int arr[5] = {1, 2, 3, 4, 5};

  // & gets the memory address of a value
  printf("%p %p %p\n", &arr[0], &arr[1], &arr[2]);
}

int main() {
  int array[100] = {31, 31, 97, 9, 48, 56, 92, 12, 48, 38, 3, 25, 5, 91, 40, 25, 58, 83, 98, 22, 55, 4, 65, 80, 78, 73, 61, 8, 39, 53, 14, 60, 78, 78, 59, 36, 41, 0, 51, 25, 24, 34, 8, 25, 13, 38, 96, 35, 54, 25, 37, 10, 28, 12, 60, 77, 0, 53, 83, 36, 53, 91, 62, 6, 77, 27, 41, 37, 48, 88, 67, 75, 81, 41, 9, 86, 58, 79, 41, 91, 47, 95, 60, 41, 21, 49, 40, 26, 80, 39, 9, 39, 4, 39, 70, 69, 3, 33, 83, 67};
  int sorted_array[100] = {604, 1707, 3966, 8477, 8754, 8925, 9426, 10915, 10923, 11991, 13256, 13644, 14441, 14846, 15509, 16438, 16671, 17503, 17652, 21705, 22126, 22213, 23349, 24531, 26376, 26517, 29572, 29842, 30321, 30931, 32598, 33518, 34857, 35024, 36284, 37381, 38070, 40576, 44963, 45287, 46902, 47498, 48093, 48317, 49622, 50143, 51055, 52199, 52949, 56280, 57790, 59807, 60058, 61052, 61142, 61199, 62104, 63558, 63952, 64116, 64798, 65505, 66491, 69083, 71042, 72998, 73361, 73782, 73834, 74001, 74100, 74354, 76589, 76950, 78009, 78060, 78666, 78868, 79299, 79574, 80515, 81334, 81990, 82650, 82934, 83539, 84209, 84440, 85022, 87166, 87820, 88175, 88442, 91212, 92709, 94609, 95382, 95639, 95960, 96640};

  hello_memory_addresses();

  if(array_length() == 100) {
    printf("array_length() passed!\n");
  } else {
    printf("array_length() failed!\n");
  }

  if(pointer_arithmetic(array, 56) == 0 && pointer_arithmetic(array, 92) == 4) {
    printf("pointer_arithmetic() passed!\n");
  } else {
    printf("pointer_arithmetic() failed!\n");
  }

  if(linear_search(array, 66, 100) == 0 && linear_search(array, 67, 100) == 1) {
    printf("linear_search() passed!\n");
  } else {
    printf("linear_search() failed!\n");
  }

  if(binary_search(sorted_array, 96640, 100) == 1 && binary_search(sorted_array, 604, 100) == 1 && binary_search(sorted_array, 48093, 100) == 0 && binary_search(sorted_array, 48094, 100) == 1) {
    printf("binary_search() passed!\n");
  } else {
    printf("binary_search() failed!\n");
  }

  return 0;
}
