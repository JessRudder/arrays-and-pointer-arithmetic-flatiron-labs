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
