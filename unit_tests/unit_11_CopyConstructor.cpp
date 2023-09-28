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
    for (int k = 0; k < 3; k++) {
      int r = rand() % 50;
      your_vect.push_back(r);
    }

    MyVector<int> your_copy = your_vect;
    for (int j = 0; j < 3; j++) {
      if (your_vect[j] != your_copy[j])
        return false;
    }

    your_vect[0] = 51; // is it a deep copy?
    if (your_copy[0] == 51)
      return false;

    return true;
  });
}
