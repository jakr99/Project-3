#include "MyVector.h"
#include "test_utils.hpp"
#include <ctime>
#include <stdlib.h>
#include <vector>

int main(const int argc, const char **argv) {
  return test_wrapper(argc, argv, []() {
    time_t seed;
    srand(time(&seed));

    MyVector<int> your_vect, your_other_vect;
    std::vector<int> test_vect, test_other_vect;

    for (int k = 0; k < 3; k++) {
      int rand_int = rand() % 100;
      your_vect.push_back(rand_int);
      test_vect.push_back(rand_int);
    }

    for (int k = 0; k < 8; k++) {
      int rand_int = rand() % 100;
      your_other_vect.push_back(rand_int);
      test_other_vect.push_back(rand_int);
    }

    your_vect.swap(your_other_vect);
    test_vect.swap(test_other_vect);

    // checking size/capacity
    if (your_vect.size() != test_vect.size())
      return false;

    if (your_vect.capacity() != test_vect.capacity())
      return false;

    // checking contents
    auto test_iter = test_vect.begin();
    for (int k = 0; k < 8; k++) {
      if (your_vect[k] != *test_iter++)
        return false;
    }

    test_iter = test_other_vect.begin();
    for (int k = 0; k < 3; k++) {
      if (your_other_vect[k] != *test_iter++)
        return false;
    }

    return true;
  });
}
