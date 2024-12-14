#include <iostream>
#include "student.h"
#include <cstring>

using namespace std;

Student::Student(const char* argname, int argid, float arggpa) {
    strcpy(name, argname);
    id = argid;
    gpa = arggpa;
}

Student::~Student() {
}
