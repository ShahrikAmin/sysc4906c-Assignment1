#include "../include/PU.hpp"
#include <numeric>
#include <iostream>
#include <cmath>
#include <algorithm>

std::optional<float> PU2::input(const std::array<float, 3> &arr)
{
    return *std::max_element(arr.begin(), arr.end());
}

void PU3::input(float f)
{
    int output = static_cast<int>(std::floor(f));
    std::cout << "SSPP Output: " << output << std::endl;
}
