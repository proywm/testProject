#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <vector>

template <typename T>
int binary_search(const std::vector<T>& arr, T target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

#endif // BINARY_SEARCH_H
