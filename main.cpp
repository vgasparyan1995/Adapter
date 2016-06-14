#include <iostream>

#include "Stack.h"

int main()
{
    local::stack<int, std::vector<int>> ivec(10, 8);
    auto other = ivec;
    other = ivec;

    auto size = ivec.size();
    std::cout << "size: " << size << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << ivec.top() << std::endl;
        ivec.pop();
    }
    size = ivec.size();
    std::cout << "size: " << size << std::endl;

    std::cout << other.size() << std::endl;
}
