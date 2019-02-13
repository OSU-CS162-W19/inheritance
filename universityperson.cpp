#include <iostream>
#include "universityperson.hpp"

bool operator==(const UniversityPerson& up1, const UniversityPerson& up2) {
  return up1.id == up2.id;
}

UniversityPerson::UniversityPerson() : name("unnamed"), id(-1) {}

UniversityPerson::UniversityPerson(std::string name, int id)
  : name(name), id(id) {}

UniversityPerson::~UniversityPerson() {
  std::cout << "Calling destructor on person: " << this->id << std::endl;
}

std::string UniversityPerson::get_name() {
  return this->name;
}

int UniversityPerson::get_id() {
  return this->id;
}
