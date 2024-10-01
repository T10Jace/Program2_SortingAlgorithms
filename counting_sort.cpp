#include "counting_sort.h"
#include <vector>

void countingSort(std::vector<int>& ar, int maxVal) {
    std::vector<int> count(maxVal + 1, 0);
    std::vector<int> output(ar.size());

    for (int i = 0; i < ar.size(); i++) {
        count[ar[i]]++;
    }

    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    for (int i = ar.size() - 1; i >= 0; i--) {
        output[count[ar[i]] - 1] = ar[i];
        count[ar[i]]--;
    }

    for (int i = 0; i < ar.size(); i++) {
        ar[i] = output[i];
    }
}
