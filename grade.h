#ifndef GRADE_H
#define GRADE_H

#include <iostream>
#include <string>
#include "Student.h"
#include "Course.h"
using namespace std;

class Grade {
private:
    Student student;
    Course course;
    double marks;
    string gradeLetter;
    double gradePoint;

public:
    // Constructors
    Grade();
    Grade(Student s, Course c, double m);

    // Destructor
    ~Grade();

    // Getters
    Student getStudent() const;
    Course getCourse() const;
    double getMarks() const;
    string getGradeLetter() const;
    double getGradePoint() const;

    // Calculate grade based on marks
    void calculateGrade();

    // Display grade info
    void displayGrade() const;
};

#endif#ifndef GRADE_H_INCLUDED
#define GRADE_H_INCLUDED



#endif // GRADE_H_INCLUDED
