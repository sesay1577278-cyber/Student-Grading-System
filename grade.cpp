#include "Grade.h"
#include <iomanip>

// Default Constructor
Grade::Grade() {
    marks = 0.0;
    gradeLetter = "F";
    gradePoint = 0.0;
}

// Parameterized Constructor
Grade::Grade(Student s, Course c, double m) : student(s), course(c) {
    marks = m;
    calculateGrade();
}

// Destructor
Grade::~Grade() {
    // Nothing to clear
}

// Getters
Student Grade::getStudent() const {
    return student;
}

Course Grade::getCourse() const {
    return course;
}

double Grade::getMarks() const {
    return marks;
}

string Grade::getGradeLetter() const {
    return gradeLetter;
}

double Grade::getGradePoint() const {
    return gradePoint;
}

// Calculate grade based on marks
void Grade::calculateGrade() {
    if (marks >= 90) {
        gradeLetter = "A+";
        gradePoint = 4.0;
    } else if (marks >= 80) {
        gradeLetter = "A";
        gradePoint = 4.0;
    } else if (marks >= 75) {
        gradeLetter = "B+";
        gradePoint = 3.5;
    } else if (marks >= 70) {
        gradeLetter = "B";
        gradePoint = 3.0;
    } else if (marks >= 65) {
        gradeLetter = "C+";
        gradePoint = 2.5;
    } else if (marks >= 60) {
        gradeLetter = "C";
        gradePoint = 2.0;
    } else if (marks >= 55) {
        gradeLetter = "D+";
        gradePoint = 1.5;
    } else if (marks >= 50) {
        gradeLetter = "D";
        gradePoint = 1.0;
    } else {
 u       gradeLetter = "F";
        gradePoint = 0.0;
    }
}

// Display grade information
void Grade::displayGrade() const {
    cout << "\n----------------------------------------\n";
    cout << " STUDENT: " << student.getName() << " (" << student.getStudentID() << ")\n";
    cout << " COURSE: " << course.getCourseName() << " (" << course.getCourseCode() << ")\n";
    cout << " MARKS  : " << fixed << setprecision(2) << marks << "/100\n";
    cout << " GRADE  : " << gradeLetter << " (" << gradePoint << " GPA)\n";
    cout << "----------------------------------------\n";
}
