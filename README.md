# Arrays and Pointer Arithmetic

To understand the algorithmic complexity of a data structure, one must understand the data structure.

## Introduction

In some programming languages, such as Ruby, arrays are abstracted
away. A Ruby array can be treated like a linked list, a stack, or an
array. After this lesson, we will better understand the implementation
of an array and what kind of performance we can expect, even in cases
where we are presented with an abstract version of an array.

But first, we need to learn about memory.

## Memory

In case you forgot, memory is the part of the computer where we store
data we are actively working with. It is separate from the hard drive
because we can read and write to it more quickly. In order to achieve this speed
boost, memory sacrifices the ability to remember data without a steady supply
of electricity. If the power shuts off, the data goes away, so that is
why we "save" our work to the hard drive.

Computers interface with memory using numerical addresses. Typically,
the hexadecimal number system is used because it maps really nicely to
binary data.

## Creating an array

An array is a contiguous portion of memory that we allocate for our
program to use.

Contiguous? That's not an ancient Greek philosopher, we are saying that
the memory used for the array can be referenced by a series of consecutive
memory addresses, i.e. 0x7fff5038c2c0, 0x7fff5038c2c1, 0x7fff5038c2c2,
etc.

Allocate? That's not a Mexican beer, that's a word used to describe the
process of reserving a portion of memory of a given size for use by the program.

## Using an array

At this point we're all used to using an array. In C we peform those
operations like this: create an array `int array[10]`, read from an
array, `array[3]`, write to an array `array[4] = 8`, and loop over an
array:

```c
for(int i = 0; i < array_length; i++) {
  printf("%d\n", array[i]);
}
```

## How does this stuff actually work though?

In C, you only know 3 things about an array, how much
space it takes up, where it starts, and what data type it contains. Recall
`int array[5];`. This code allocates contiguous memory that is the size of 5
integers and stores the memory address of the array in the variable `array`.

Say we access the element at index 2, `array[2]`. Ruby's not the only
language that's nice to developers, this is actually syntactic sugar!

It is equivalent to: `*(array + 2)`. `array` is the beginning of the array,
`2` is how far to jump ahead in memory (C knows the array contains
integers, so if your ints are 32 bits, then it will automatically add
2 * 32 bits), and then finally `*` means "get the value at the following
memory address".

Congratulations, you now know pointer arithmetic!

And now, we can say with confidence that accessing an array element is
O(1) because no matter what array we have an what element we access, it
will always be a single addition operation and a memory look up.

Like-wise, writing to an array is also O(1), we calculate the
memory address we want to write to, then we write to it.

We also see that there's no way to know the contents of the array
without additional logic or data structures, so finding a specific
element in an array is O(n) because we would have to look at every
element in the array.

Here's a good resource from The University of Maryland that even has
pictures: [Pointer Arithmetic](https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/BitOp/Figs/arr2.png)

## Doing stuff

Now it's time to do stuff! Look at the source code in arrays.c and
follow the instructions.
