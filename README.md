# Basics C++ Code

This repository contains various C++ programs to demonstrate basic concepts of object-oriented programming (OOP) and data structures. Below is a summary of each program included in this repository.

---

## 1. **Merge Linked Lists at a Specific Position (`Insert_linked_lists.cpp`)**

### Description:
This program demonstrates how to insert one linked list into another at a specified position (`k`). It takes input for two linked lists and merges the second list into the first list at the provided position. 

### Features:
- Creates two linked lists using input data.
- Reverses the elements of both linked lists before inserting.
- Merges the second linked list into the first linked list at a user-specified position.
- Prints the resulting linked list.

### Input Example:
Number of nodes A: 3 Insert nodes A: 1 2 3 Number of nodes B: 2 Insert nodes B: 4 5 Location: 2


### Output Example:
```bash
   Resulting linked list: 1 2 4 5 3
```

---

## 2. **Rectangle Class with Constructors and Methods (`rectangle_class.cpp`)**

### Description:
This program demonstrates the use of constructors and methods in a C++ class. It defines a `RECT` class with attributes for position (`x`, `y`), dimensions (`w`, `h`), and color. Two constructors are provided to create a rectangle with default or custom attributes.

### Features:
- Two constructors to initialize a rectangle: one with default size and color, and another with custom dimensions and color.
- A method to print the rectangle's attributes.

### Input Example:
No direct input. The rectangles are created directly in the code.

### Output Example:
```bash
300 200 100 100 WHITE 
400 500 50 40 GREEN
```

---

## 3. **Linked List Operations (`merge_linked_list.cpp`)**

# Description
This C++ program inserts one linked list (List B) into another linked list (List A) at a specified position.

## Features
- Create two linked lists from user input.
- Reverse input arrays to ensure correct order.
- Insert List B into List A at a specified position `k`.
- Print the linked lists before and after the insertion.

**Input Example:
Number of nodes A: 3 Insert nodes A: 1 2 3 Number of nodes B: 2 Insert nodes B: 4 5 Location: 2

**Output Example:**
```bash
Linked List A: 3 2 1 Linked List B: 5 4 Resulting linked list: 3 5 4 2 1
```

## 4. **Circle Class with Methods for Perimeter and Area Calculation (`circle_class.cpp`)**

### Description:
This program demonstrates a simple class `Circle` that calculates the perimeter and area of a circle given its radius. It includes constructors to initialize the radius and methods to compute the perimeter and area.

### Features:
- Calculates the perimeter and area of a circle based on its radius.
- Includes a getter and setter for the radius.

### Input Example:
No direct input. The circle is created with a given radius in the code.

### Output Example:
```bash
Radius=30 Area of circle=2827.43 Perimeter of circle=188.495
```
---

## How to Compile and Run:

1. **Install a C++ compiler** (e.g., g++ or clang++).
2. **Compile the code:**
   - Open a terminal or command prompt.
   - Navigate to the directory where the file is located.
   - Compile the program using the following command:
     ```bash
     g++ <filename>.cpp -o <output_name>
     ```
3. **Run the program:**
   - Execute the compiled program:
     ```bash
     ./<output_name>
     ```







