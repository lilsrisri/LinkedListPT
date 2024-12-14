#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>

class Student {
    public:
        Student(const char* name, int id, float gpa); //Student Constructor
        ~Student(); //Student destructor
    private: //Everything a student might have, name, id, gpa.
        char name[100];
        int id;
        float gpa;

};



#endif
