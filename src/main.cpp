#include "merge.h"

#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
   Merge merge;

   std::cout << merge.addTwoNumbers(5, 4) << '\n';
   std::cout << "Number Of calculations: " << static_cast<int>(merge.getNumberOfCalculations()) << '\n';

   std::cout << merge.subtractTwoNumbers(10, 4) << '\n';
   std::cout << "Number Of calculations: " << static_cast<int>(merge.getNumberOfCalculations()) << '\n';

}