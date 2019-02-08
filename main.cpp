#include <iostream>

#include "universityperson.hpp"
#include "employee.hpp"

int main(int argc, char const *argv[]) {
  UniversityPerson person("Luke Skywalker", 933111111);
  Employee employee("Leia Organa", 933222222, "instructor", 1000);

  std::cout << "person: " << person.get_name() << "\t" << person.get_id()
    << std::endl;
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << "\t" << employee.get_title() << "\tmonthly pay: "
    << employee.get_monthly_pay(160) << std::endl;

  return 0;
}
