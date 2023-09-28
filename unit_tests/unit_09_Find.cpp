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

    int r;
    for (int k = 0; k < 4; k++) {
      r = rand() % 50;
      your_vect.push_back(r);
    }

    return your_vect.find(r);
  });
}
