#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int credits;
    string instructor;

public:
    // Constructors
    Course();
    Course(string code, string name, int cred, string instr);

    // Destructor
    ~Course();

    // Getters
    string getCourseCode() const;
    string getCourseName() const;
    int getCredits() const;
    string getInstructor() const;

    // Setters
    void setCourseCode(string code);
    void setCourseName(string name);
    void setCredits(int cred);
    void setInstructor(string instr);

    // Display course info
    void displayInfo() const;
};

#endif#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED



#endif // COURSE_H_INCLUDED
