# Inventory-Management-C

This repository contains a series of practical exercises developed to consolidate fundamental concepts of the C programming language, evolving from the basic use of pointers to the manipulation of arrays of structures using pointer arithmetic.

## Project Content

The code demonstrates four stages of learning evolution:

1. **Direct Pointer Manipulation (Activity 1)**
   * Demonstration of how to change a variable's value indirectly by accessing its memory address through a pointer.
   * Use of decimal place formatting with `printf`.

2. **Pass by Reference (Activity 2)**
   * Creation of a function to apply a discount, modifying the original variable's value directly in memory.
   * Avoids the use of global variables by utilizing local scope inside `main`.

3. **Arrow Operator with Structures (Activity 3)**
   * Creation of the custom `Produto` (Product) type using `typedef struct`.
   * Implementation of the arrow operator (`->`) to access and modify structure members when received via a pointer in a function.

4. **Pointer Arithmetic in Arrays (Activity 4)**
   * Initialization of a structure array (vector) in a logical and sequential manner.
   * Navigation and display of the array data without using brackets (`[i]`), strictly applying pointer arithmetic: `(produto + i)->id`.

## Code Structure

* **`Produto`**: Structure that groups a numerical identifier (`id`) and a decimal price (`preco`).
* **`aplicar_desconto`**: Function that receives the address of a product and reduces its price based on a percentage.
* **`imprimir_produtos`**: Function that receives the pointer to the start of the array and the number of elements, traversing the memory sequentially.


## How to Run

To compile and run this project, you need a C compiler (such as Clang or GCC) installed on your system.

1. Open your terminal.
2. Navigate to the project directory.
3. Compile the code using the following command:
   ```bash
   clang main.c -o main