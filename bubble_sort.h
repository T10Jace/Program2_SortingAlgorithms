#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>

void bubbleSortA(std::vector<int>& ar);  // No swap detection
void bubbleSortB(std::vector<int>& ar);  // With swap detection (left to right)
void bubbleSortC(std::vector<int>& ar);  // With swap detection (right to left)

#endif
