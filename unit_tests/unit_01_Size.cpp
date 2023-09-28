#include "MyVector.h"
#include "test_utils.hpp"
#include <ctime>
#include <stdlib.h>
#include <vector>
using std::vector;

int main(const int argc, const char **argv) {
  return test_wrapper(argc, argv, []() {
    time_t seed;
    srand(time(&seed));

    MyVector<int> your_vect;
    vector<int> test_vect;
    int r = rand() % 5 + 10;

    if (your_vect.size() != 0)
      return false;

    for (int k = 0; k < r; k++)
      your_vect.push_back(1);

    if (your_vect.size() != r)
      return false;

    your_vect.pop_back();
    if (your_vect.size() != r - 1)
      return false;

    return true;
  });
}
