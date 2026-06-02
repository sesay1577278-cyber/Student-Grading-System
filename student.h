#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {

private:
    int studentID;
    string name;
    int maths;
    int english;
    int science;
    int biology;
    float average;
    char grade;
    string status;

public:
    Student();
    Student(int id, string n, int m, int e, int s);

    void calculateResult();
    void displayResult();
    void saveToFile();

    int getID();
    string getName();
};

#endif
