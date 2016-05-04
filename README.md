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
binary data. If you didn't know what that meant before, you certainly
don't now, so here's some learning.

## Binary and Hex

To store data, computers use (really) tiny things called transistors that can
be in 1 of 2 states. This is convenient because we can represent any
number in the universe using a series of transistors by using the 2
different states to represent the two values in the binary number
system, 1 and 0. The binary number system (0,1), is exactly equivalent to our
decimal number system (0,1,2,3,4,5,6,7,8,9), it just takes more digits to
represent any given number. The advantage is that is simpler to
manufacture physical hardware to work with 2 states rather than 10
states. These are also referred to as "base 2" or
"base 10". You can have a number system with "base" anything. In fact,
[there have been computers built that had 3 states](https://en.wikipedia.org/wiki/Ternary_computer),
so it used the base 3 number system, or "ternary".
