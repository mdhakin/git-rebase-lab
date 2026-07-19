#pragma once

#include <cstdint>

class Merge
{
    public:
        int addTwoNumbers(int A, int B);
        int subtractTwoNumbers(int A, int B);
        std::uint8_t getNumberOfCalculations() const;
    private:
        std::uint8_t calculationCount_{0};
};