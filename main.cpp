#include <iostream>

#include "universityperson.hpp"
#include "employee.hpp"
#include "instructor.hpp"

int main(int argc, char const *argv[]) {
  UniversityPerson person("Luke Skywalker", 933111111);
  UniversityPerson person2("Second Luke Skywalker", 933111112);
  Employee employee("Darth Vader", 933666666, "Director of HR", 31.50);
  // employee.email = "leia@oregonstate.edu";

  std::cout << "person: " << person.get_name() << "\t" << person.get_id()
    << std::endl;
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << "\t" << employee.get_title() << "\tmonthly pay: "
    << employee.get_monthly_pay(160) << std::endl;

  give_raise(employee, 0.05);
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << "\t" << employee.get_title() << "\tmonthly pay: "
    << employee.get_monthly_pay(160) << std::endl;

  if (person == person2) {
    std::cout << "The people are the same" << std::endl;
  } else {
    std::cout << "The people are NOT the same" << std::endl;
  }

  Instructor instructor("Leia Organa", 933222222, "instructor", 1000000, 9);
  std::cout << "instructor: " << instructor.get_name() << "\t" << instructor.get_id()
    << "\t" << instructor.get_title() << "\tmonthly pay: "
    << instructor.get_monthly_pay() << std::endl;

  return 0;
}
