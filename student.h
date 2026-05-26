#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentID;
    string name;
    string email;
    string department;
    int yearLevel;

public:
    // Constructors
    Student();
    Student(string id, string name, string email, string dept, int year);

    // Destructor
    ~Student();

    // Getters
    string getStudentID() const;
    string getName() const;
    string getEmail() const;
    string getDepartment() const;
    int getYearLevel() const;

    // Setters
    void setStudentID(string id);
    void setName(string name);
    void setEmail(string email);
    void setDepartment(string dept);
    void setYearLevel(int year);

    // Display student info
    void displayInfo() const;

    // Check if two students are equal
    bool operator==(const Student& other) const;
};

#endif#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED



#endif // STUDENT_H_INCLUDED
