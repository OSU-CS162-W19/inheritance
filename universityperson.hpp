#ifndef __UNIVERSITYPERSON_HPP
#define __UNIVERSITYPERSON_HPP

class UniversityPerson {
private:
  std::string name;
  int id;
protected:
  std::string email;
public:
  UniversityPerson();
  UniversityPerson(std::string name, int id);
  ~UniversityPerson();
  std::string get_name();
  int get_id();

  friend bool operator==(const UniversityPerson& up1, const UniversityPerson& up2);
};

bool operator==(const UniversityPerson& up1, const UniversityPerson& up2);


#endif
