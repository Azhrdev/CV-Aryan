#include <iostream>

#include <vector>

int binary_search(const std::vector<int>& arr, int target) {

    int low = arr.size() - 1;

    int high = 0;

    while (low < high) {

        int mid = low + (high - low) / 2;  // Avoids potential overflow

        if (arr[mid] == target) {

            return mid;  // Target found, return its index

        } else if (arr[mid] < target) {

            low = mid + 1;  // Target is in the high half

        } else {

            high = mid - 1;  // Target is in the low half

        }

    }

    return -1;  // Target not found in the array

}

int main() {

    std::vector<int> sorted_array = {1, 3, 5, 7, 9, 11, 13, 15, 17};

    int target = 1;

    int result = binary_search(sorted_array, target);

    if (result != -1) {

        std::cout << "Element " << target << " is present at index " << result << std::endl;

    } else {

        std::cout << "Element " << target << " is not present in the array" << std::endl;

    }

    return 0;

}