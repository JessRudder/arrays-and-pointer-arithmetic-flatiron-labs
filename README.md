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
data we are working with. It is separate from the hard drive because we
can read and write to it more quickly. In order to get this speed boost,
memory can't remember data without a steady supply of electricity.

Computers interface with memory using numerical addresses. Typically,
the hexadecimal number system is used because it maps really nicely to
binary data. If you didn't know what that meant before, you certainly
don't now, so here's some learning.
