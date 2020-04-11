#ifndef __STUDENT_H
#define __STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student {
  string name;
  int score;
  
  bool operator<(const Student& otherStudent) {
    return score != otherStudent.score ? score > otherStudent.score : name < otherStudent.name;
  }
  
  friend ostream& operator<<(ostream &os, 
                              const Student &student) {
    os << "Student: " << student.name << " " 
      << student.score <<endl;
     return os;
  }
};

#endif /** __STUDENT_H */