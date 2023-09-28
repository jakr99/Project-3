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

    MyVector<short> your_vect;
    vector<short> test_vect;
    for (int k = 0; k < 5; k++) {
      for (int j = 0; j < 5; j++) {
        your_vect.push_back(1);
        test_vect.push_back(1);
      }
      if (your_vect.capacity() != test_vect.capacity())
        return false;
    }
    return true;
  });
}
