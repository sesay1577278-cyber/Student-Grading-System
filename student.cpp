#include "Student.h"

// Default Constructor
Student::Student() {
    studentID = "";
    name = "";
    email = "";
    department = "";
    yearLevel = 1;
}

// Parameterized Constructor
Student::Student(string id, string nameVal, string emailVal, string dept, int year) {
    studentID = id;
    name = nameVal;
    email = emailVal;
    department = dept;
    yearLevel = year;
}

// Destructor
Student::~Student() {
    // Nothing to clear for primitive types
}

// Getters
string Student::getStudentID() const {
    return studentID;
}

string Student::getName() const {
    return name;
}

string Student::getEmail() const {
    return email;
}

string Student::getDepartment() const {
    return department;
}

int Student::getYearLevel() const {
    return yearLevel;
}

// Setters
void Student::setStudentID(string id) {
    studentID = id;
}

void Student::setName(string nameVal) {
    name = nameVal;
}

void Student::setEmail(string emailVal) {
    email = emailVal;
}

void Student::setDepartment(string dept) {
    department = dept;
}

void Student::setYearLevel(int year) {
    yearLevel = year;
}

// Display student information
void Student::displayInfo() const {
    cout << "\n========================================\n";
    cout << "          STUDENT INFORMATION          \n";
    cout << "========================================\n";
    cout << "Student ID    : " << studentID << endl;
    cout << "Name          : " << name << endl;
    cout << "Email         : " << email << endl;
    cout << "Department    : " << department << endl;
    cout << "Year Level    : " << yearLevel << endl;
    cout << "========================================\n";
}

// Equality comparison
bool Student::operator==(const Student& other) const {
    return studentID == other.studentID;
}s
