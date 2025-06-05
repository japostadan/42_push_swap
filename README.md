# Push Swap

## Description

	* This project will make you sort data on a stack, whith a limited set of instructions, using the lowest possible number of actions. To succeed you'll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimize data sorting. This sorting algorithm project where you must sort a stack of integers using a minimal set of operations. You write two programs:

## The rules
	* You have 2 stacks named a and b.
	* At the beginning;
		Stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
		The stack b must be empty.
	* The goal is to sort in ascending order numbers into stack a. To dos so you will have to follow the these operations.
		- sa (swap a): Swap the first 2 elements at the top stack a.
			do nothing if there is only one or no elements.
		- sb (swap b): Swap the first two 2 elements at the top of the stack b.
			do nothing if there is only one or no elements.
		- ss (sa and sb): Do sa and sb at the same time.
		- pa (push a): Take the first element at the top of b and put it at the top of a.
		- pb (push b): Take the first element at the top of a and put it at the top of b.
		- ra (rotate a): Shift up all the element of stack a by 1.
			do nothing if a is empty.
		- rb (rotate b):Shift up all the element of stack b by 1.
			do nothing if a is empty.
		- rr (ra and rb): Do ra and rb at the same time.
		- rra (reverse rotate a): Shift down all elements of stack a by 1.
			The last element becomes the first one.
		- rrb (reverse rotate b): Shift down all elements of stack b by 1.
			The last element becomes the first one.
		- rrr (rra and rrb) Do rra and rrb at the same time.

1. **push_swap** – calculates and prints the list of operations to sort the given numbers.
2. **checker** – reads a list of operations and verifies whether they sort the stack correctly.

---

## Table of Contents

- [Features](#features)  
- [Usage](#usage)  
  - [Compile the library](#compile-the-library)  
  - [Running push_swap](#running-push_swap)  
  - [Running checker](#running-checker)  
- [Rules & Operations](#rules--operations)  
- [Project Structure](#project-structure)  

---

## Features

- Validates input (integers only, no duplicates, within 32-bit range).  
- Supports the following operations:
  - **Swap:** `sa`, `sb`, `ss`  
  - **Push:** `pa`, `pb`  
  - **Rotate:** `ra`, `rb`, `rr`  
  - **Reverse Rotate:** `rra`, `rrb`, `rrr`  
- Optimized for minimal moves on small (2–5 elems) and large stacks.  

---

## Usage

### Compile the library (bash)

```
cd push_swap
make
```

# This builds:

**push_swap (your main sorting program)**, **checker_linux (the checker for Linux)**

Running push_swap
bash
./push_swap 3 2 5 1 4
It will print a sequence of operations, one per line, that, when applied to the stack, sorts it in ascending order.

## Running checker
You can pipe operations into the checker to verify:
# Example: check a correct solution
./push_swap 3 2 5 1 4 | ./checker_linux 3 2 5 1 4
# Output should be "OK"

# Example: check an incorrect sequence
echo -e "sa\nra\npb" | ./checker_linux 3 2 5 1 4
# Output should be "KO"

## Rules & Operations
# No global variables

Allowed functions: only those you implement in your own libft (no <stdlib.h> conversion helpers, except for memory management)
Memory leaks must be avoided
Errors (invalid input, memory failures) must print Error\n to stderr and exit with status 1

# Project Structure

```
42-Push-Swap/
├── bonus/               # Optional extra features
├── libft/               # Your custom libft with helpers
├── src/                 # All push_swap and checker sources
│   ├── main.c
│   ├── validation.c
│   ├── init_stack.c
│   ├── sort_stack.c
|   ├── pushswap.h       
│   ├── ... (ops, utils, indexing)
├── checker_linux        # Built checker executable
├── push_swap            # Built push_swap executable
├── Makefile
└── README.md
```
