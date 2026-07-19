#include "merge.h"


int Merge::addTwoNumbers(int A, int B)
{
    calculationCount_++;
    return A + B;
}

int Merge::multiplyTwoNumbers(int A, int B)
{
    calculationCount_++;
    return A * B;
}

std::uint8_t Merge::getNumberOfCalculations() const
{
    return calculationCount_;
}

int Merge::subtractTwoNumbers(int A, int B)
{
    calculationCount_++;
    return A - B;
}