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

    for (int k = 0; k < 4; k++) {
      int r = rand() % 50;
      your_vect.push_back(r);
      test_vect.push_back(r);
    }

    if (your_vect.at(3) != test_vect.at(3))
      return false;

    return true;
  });
}
