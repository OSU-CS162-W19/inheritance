#include <iostream>
#include "instructor.hpp"

Instructor::Instructor(std::string name, int id, std::string title, float salary,
  int appt_length) : Employee(name, id, title, salary), appt_length(appt_length) {}
