#include <lib/binary_search.h>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 3, 5, 7, 9};
    int target = 5;
    int result = binary_search(data, target);
    if (result != -1) {
        std::cout << "Found at index: " << result << std::endl;
    } else {
        std::cout << "Not found." << std::endl;
    }
    return 0;
}
