/* Sample main
 * Disclaimer: this file is not a unit test!

This is merely to work through compilation issues
or to provide a sandbox for testing functions
change it if you like, it is not graded

Background reading:

General container library
http://en.cppreference.com/w/cpp/container

Vector
http://en.cppreference.com/w/cpp/container/vector
(This wiki the most “official”, but still unofficial, source of C++ knowledge
for end-programmers)

http://www.cplusplus.com/reference/vector/vector/
(This may also help, but if these links differ, go with en.cppreference.com
instead)

Overloading operator syntax
https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
*/

// USE THIS TO TEST, BUT REMOVE LATER
#include <string>
#include <vector>
/// Uncomment this:
#include "MyVector.h"

int main() {
  MyVector<std::string> travel_route;

  cout << travel_route.size() << endl;
  travel_route.push_back("Tokyo");
  travel_route.push_back("Cairo");
  cout << travel_route.at(0) << endl;
  cout << travel_route.capacity() << endl;
  travel_route.erase(0);
  cout << travel_route.capacity() << endl;
  travel_route.push_back("Singapore");
  travel_route.push_back("Taiwan");
  travel_route.push_back("Hong Kong");
  travel_route.push_back("South China Sea");
  travel_route.push_back("Singapore");
  travel_route.push_back("Calcutta");
  travel_route.push_back("Varanasi");
  travel_route.push_back("Karachi");
  travel_route.push_back("Riyad");
  travel_route.push_back("Arabian Desert");

  travel_route.insert(0, "New York");
  travel_route.insert(travel_route.size(), "Tokyo");

  for (int i = 0; i < travel_route.size(); i++) {
    cout << travel_route.at(i) << endl;
    cout << travel_route[i] << endl;
  }

  return 0;
}
