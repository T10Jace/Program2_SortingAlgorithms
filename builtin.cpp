/**
 * @file builtin.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief A sample sorter using the built in sort
 * @version 0.1
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <vector>
#include <algorithm> // got an error so i added this library which includes sort
#include "builtin.h"


void builtinSort(std::vector<int> &v) 
{
    sort(v.begin(), v.end());
}