#include "merge.h"


int Merge::addTwoNumbers(int A, int B)
{
    calculationCount_++;
    return A + B;
}

std::uint8_t Merge::getNumberOfCalculations() const
{
    return calculationCount_;
}