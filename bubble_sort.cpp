#include "bubble_sort.h"

void bubbleSortA(std::vector<int>& ar) {
    int n = ar.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ar[j] > ar[j + 1]) {
                std::swap(ar[j], ar[j + 1]);
            }
        }
    }
}


void bubbleSortB(std::vector<int>& ar) {
    int n = ar.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (ar[j] > ar[j + 1]) {
                std::swap(ar[j], ar[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;  // If no elements were swapped, the array is sorted
    }
}


void bubbleSortC(std::vector<int>& ar) {
    int n = ar.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = n - 1; j > i; --j) {
            if (ar[j] < ar[j - 1]) {
                std::swap(ar[j], ar[j - 1]);
                swapped = true;
            }
        }
        if (!swapped) break;  // If no elements were swapped, the array is sorted
    }
}
