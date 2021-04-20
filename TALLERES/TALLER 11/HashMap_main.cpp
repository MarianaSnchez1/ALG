//Hash table
#include "HashMap.hpp"
#include <cstdint>
#include <limits>

int main() {
  cout << boolalpha;
  HashMap<int> manuel(numeric_limits<std::int32_t>::max());
  cout << "Size: " << manuel.size() << endl;
  cout << "Empty: " << manuel.empty() << endl;
  cout << endl;

  manuel.push("AH", true);
  manuel.push("CUANDO", false);
  manuel.push("ESTOY", true);
  manuel.push("PENSANDO", false);
  manuel.push("EN", true);
  manuel.push("TI", false);
  cout << "Re size: " << manuel.size() << endl;
  cout << endl;
  manuel.display();
  return 0;
}
