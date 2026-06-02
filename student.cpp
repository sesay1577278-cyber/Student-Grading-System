#include <iostream>
#include <fstream>
#include "Student.h"

using namespace std;

Student::Student() {

    studentID = 0;
    name = "";
    maths = 0;
    english = 0;
    science = 0;
    average = 0;
    grade = 'F';
    status = "Fail";
}

Student::Student(int id, string n, int m, int e, int s) {

    studentID = id;
    name = n;
    maths = m;
    english = e;
    science = s;

    calculateResult();
}

void Student::calculateResult() {

    average = (maths + english + science) / 3.0;

    if (average >= 75)
        grade = 'A';

    else if (average >= 60)
        grade = 'B';

    else if (average >= 50)
        grade = 'C';

    else
        grade = 'F';

    if (average >= 50)
        status = "Pass";

    else
        status = "Fail";
}

void Student::displayResult() {

    cout << "\n========== STUDENT RESULT ==========" << endl;

    cout << "Student ID : " << studentID << endl;
    cout << "Name       : " << name << endl;
    cout << "Maths       : " << maths << endl;
    cout << "English    : " << english << endl;
    cout << "Science    : " << science << endl;
    cout << "Average    : " << average << endl;
    cout << "Grade      : " << grade << endl;
    cout << "Status     : " << status << endl;
}

void Student::saveToFile() {

    ofstream file("students.txt", ios::app);

    file << studentID << " "
         << name << " "
         << maths << " "
         << english << " "
         << biology << " "
         << science<< " "
         << average << " "
         << grade << " "
         << status << endl;

    file.close();
}

int Student::getID() {

    return studentID;
}

string Student::getName() {

    return name;
}
