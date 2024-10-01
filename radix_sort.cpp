#include "radix_sort.h"
#include <vector>

int getMax(const std::vector<int>& ar) {
    int maxVal = ar[0];
    for (int i = 1; i < ar.size(); i++) {
        if (ar[i] > maxVal) {
            maxVal = ar[i];
        }
    }
    return maxVal;
}

void countingSortByDigit(std::vector<int>& ar, int exp) {
    int n = ar.size();
    std::vector<int> output(n);
    std::vector<int> count(2, 0);

    for (int i = 0; i < n; i++) {
        int digit = (ar[i] / exp) % 2;
        count[digit]++;
    }

    for (int i = 1; i < 2; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int digit = (ar[i] / exp) % 2;
        output[count[digit] - 1] = ar[i];
        count[digit]--;
    }

    for (int i = 0; i < n; i++) {
        ar[i] = output[i];
    }
}

void radixSort(std::vector<int>& ar) {
    int maxVal = getMax(ar);
    for (int exp = 1; (maxVal / exp) > 0; exp *= 2) {
        countingSortByDigit(ar, exp);
    }
}
