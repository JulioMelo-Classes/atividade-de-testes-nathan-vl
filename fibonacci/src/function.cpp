#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    if (n < 2) {
        return std::vector<unsigned int>{};
    }

    std::vector<unsigned int> result = {1, 1};

    while (result[result.size() - 1] < n) {
        auto vector_size = result.size();

        auto last_el = result[vector_size - 1];
        auto before_last_el = result[vector_size - 2];

        auto new_el = last_el + before_last_el;

        if (new_el >= n) break;

        result.push_back(new_el);
    }

    return result;
}
