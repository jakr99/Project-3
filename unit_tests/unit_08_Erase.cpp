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
    for (int k = 0; k < 5; k++) {
      int r = rand() % 50;
      your_vect.push_back(r);
      test_vect.push_back(r);
    }
    your_vect.erase(0);
    test_vect.erase(test_vect.begin());
    your_vect.erase(2);
    test_vect.erase(test_vect.begin() + 2);

    for (int j = 0; j < 3; j++) {
      if (your_vect[j] != test_vect[j])
        return false;
    }

    return true;
  });
}
