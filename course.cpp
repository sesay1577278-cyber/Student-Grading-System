#include "Course.h"

// Default Constructor
Course::Course() {
    courseCode = "";
    courseName = "";
    credits = 0;
    instructor = "";
}

// Parameterized Constructor
Course::Course(string code, string nameVal, int cred, string instr) {
    courseCode = code;
    courseName = nameVal;
    credits = cred;
    instructor = instr;
}

// Destructor
Course::~Course() {
    // Nothing to clear
}

// Getters
string Course::getCourseCode() const {
    return courseCode;
}

string Course::getCourseName() const {
    return courseName;
}

int Course::getCredits() const {
    return credits;
}

string Course::getInstructor() const {
    return instructor;
}

// Setters
void Course::setCourseCode(string code) {
    courseCode = code;
}

void Course::setCourseName(string nameVal) {
    courseName = nameVal;
}

void Course::setCredits(int cred) {
    credits = cred;
}

void Course::setInstructor(string instr) {
    instructor = instr;
}

// Display course information
void Course::displayInfo() const {
    cout << "Course Code   : " << courseCode << endl;
    cout << "Course Name   : " << courseName << endl;
    cout << "Credits       : " << credits << endl;
    cout << "Instructor    : " << instructor << endl;
}
