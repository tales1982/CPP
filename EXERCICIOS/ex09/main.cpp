#include "MiniSpan.hpp"
#include <algorithm>
#include <functional>

int main(void)
{
    MiniSpan a1;

    a1.addNumber(10);
    a1.addNumber(80);
    a1.addNumber(50);

    const std::vector<int>& nums = a1.getNumbers();

    std::cout << "Original:" << std::endl;
    for (size_t i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << std::endl;

    std::vector<int> sorted = nums; // cópia
    std::sort(sorted.begin(), sorted.end(), std::greater<int>());

    std::cout << "Ordenado:" << std::endl;
    for (size_t i = 0; i < sorted.size(); ++i)
        std::cout << sorted[i] << std::endl;

    a1.shortestSpan();
    a1.longestSpan();

    return 0;
}
