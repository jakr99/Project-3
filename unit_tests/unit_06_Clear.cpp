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

    MyVector<char> your_vect;
    vector<char> test_vect;
    int r = rand() % 5 + 3;
    for (int k = 0; k < r; k++) {
      your_vect.push_back('a');
      test_vect.push_back('a');
    }

    your_vect.clear();
    test_vect.clear();

    if (your_vect.size() != test_vect.size())
      return false;
    if (your_vect.capacity() != test_vect.capacity())
      return false;

    return true;
  });
}
