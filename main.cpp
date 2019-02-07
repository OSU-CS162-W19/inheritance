#include <iostream>

#include "universityperson.hpp"

int main(int argc, char const *argv[]) {
  UniversityPerson person("Luke Skywalker", 933111111);

  std::cout << "person: " << person.get_name() << "\t" << person.get_id()
    << std::endl;

  return 0;
}
