#include "insertion_sort.h"

void insertionSort(std::vector<int>& ar) {
    for (int i = 1; i < ar.size(); ++i) {
        int key = ar[i];
        int j = i - 1;
        while (j >= 0 && ar[j] > key) {
            ar[j + 1] = ar[j];
            --j;
        }
        ar[j + 1] = key;
    }
}
