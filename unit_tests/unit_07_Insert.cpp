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

    /*MyVector<int> your_vect;
    vector<int> test_vect;
    for (int k = 0; k < 3; k++) {
      int r = rand() % 50;
      your_vect.push_back(r);
      test_vect.push_back(r);
    }
    your_vect.insert(0, 4);
    test_vect.insert(test_vect.begin(), 4);
    your_vect.insert(2, 8);
    test_vect.insert(test_vect.begin() + 2, 8);
    your_vect.insert(5, 16);
    test_vect.insert(test_vect.begin() + 5, 16);

    for (int j = 0; j < 6; j++) {
      if (your_vect[j] != test_vect[j])
        return false;
    }*/

    MyVector<int> your_vect;
    vector<int> test_vect;
    for (int k = 0; k < 3; k++) {
      int r = rand() % 50;
      your_vect.push_back(r);
      test_vect.push_back(r);
    }
    your_vect.insert(your_vect.begin(), 4);
    test_vect.insert(test_vect.begin(), 4);
    your_vect.insert(your_vect.begin() + 2, 8);
    test_vect.insert(test_vect.begin() + 2, 8);
    your_vect.insert(your_vect.begin() + 5, 16);
    test_vect.insert(test_vect.begin() + 5, 16);

    for (int j = 0; j < 6; j++) {
      if (your_vect[j] != test_vect[j])
        return false;
    }

    return true;
  });
}
