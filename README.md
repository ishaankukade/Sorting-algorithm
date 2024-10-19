# Sorting-Algorithms

## Overview

This repository contains implementations of three popular sorting algorithms written in C++:
1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**

Sorting is a fundamental operation in computer science and is widely used in many algorithms and systems. This repository is a simple reference for understanding and implementing basic sorting techniques.

## Sorting Algorithms

### 1. Bubble Sort

**Description:**

Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The largest unsorted element "bubbles up" to the correct position at the end of the array.

**Algorithm:**
1. Repeat the following steps for each element in the array (n times):
   a. Compare adjacent elements.
   b. If they are in the wrong order (arr[j] > arr[j + 1]), swap them.
   c. Move to the next element.
2. Continue until the entire array is sorted.

**Time Complexity:**
- Worst Case: O(n²)
- Best Case: O(n) (when the array is already sorted)
- Average Case: O(n²)

**Space Complexity:** O(1)

### 2. Selection Sort

**Description:**

Selection Sort finds the minimum element in the unsorted part of the array and swaps it with the first element in the unsorted part. This process repeats until the entire array is sorted.

**Algorithm:**
1. Set the first element as the minimum.
2. Iterate over the unsorted part of the array and find the smallest element.
3. Swap the smallest element with the first element of the unsorted part.
4. Move the boundary of the sorted and unsorted part one element to the right.
5. Repeat until the array is sorted.

**Time Complexity:**
- Worst Case: O(n²)
- Best Case: O(n²)
- Average Case: O(n²)

**Space Complexity:** O(1)

### 3. Insertion Sort

**Description:**

Insertion Sort builds the sorted array one element at a time by repeatedly inserting the next element in its correct position within the sorted part of the array.

**Algorithm:**
1. Start with the second element (first element is already sorted).
2. Compare the current element with the elements in the sorted part of the array.
3. Shift all larger elements to the right.
4. Insert the current element in its correct position.
5. Repeat the process for each element until the array is sorted.

**Time Complexity:**
- Worst Case: O(n²)
- Best Case: O(n) (when the array is already sorted)
- Average Case: O(n²)

**Space Complexity:** O(1)
