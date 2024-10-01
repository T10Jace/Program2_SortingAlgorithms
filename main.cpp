/**
 * @file main.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief Test the sort algorithms using the number of elements specified on the command line.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "sort_test.h"
#include "builtin.h"
#include "merge_sort.h"
#include "quicksort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "bubble_sort.h"
#include "counting_sort.h"
#include "radix_sort.h"

using namespace std;

int main(int argc, char **argv)
{
    // Get the number of elements to sort.
    unsigned int n = 100;
    if (argc == 2) {
        n = stoi(argv[1]);
    }
    SortTest t{n};

    // Run the tests
    cout << "Array Size: " << n << endl;

    // Built-in sort
    t.run("Built-In STL Sort", builtinSort);

    // Merge Sort
    t.run("Merge Sort", mergesort);

    // Quick Sort
    t.run("Quick Sort", quicksort);

    // Selection Sort A
    t.run("Selection Sort A", selectionSortA);

    // Selection Sort B
    t.run("Selection Sort B", selectionSortB);

    // Insertion Sort
    t.run("Insertion Sort", insertionSort);

    // Bubble Sort A (Without Swap Detection)
    t.run("Bubble Sort A", bubbleSortA);

    // Bubble Sort B (With Swap Detection - left to right)
    t.run("Bubble Sort B", bubbleSortB);

    // Bubble Sort C (With Swap Detection - right to left)
    t.run("Bubble Sort C", bubbleSortC);

    // Counting Sort (requires max value, assume max value 10000 for this example)
    t.run("Counting Sort", [](std::vector<int>& ar) { countingSort(ar, 10000); });

    // Radix Sort (using binary radix)
    t.run("Radix Sort", radixSort);

    return 0;
}
