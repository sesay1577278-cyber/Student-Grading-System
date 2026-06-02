#include <iostream>
#include <vector>
#include "Student.h"
#include "User.h"

using namespace std;

void addStudent(vector<Student>& students)
{
    int id;
    int math;
    int english;
    int science;

    string name;

    cout << "\n===== ADD STUDENT =====" << endl;

    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Math Marks: ";
    cin >> math;

    cout << "Enter English Marks: ";
    cin >> english;

    cout << "Enter Science Marks: ";
    cin >> science;

    Student s(id, name, math, english, science);

    students.push_back(s);

    s.saveToFile();

    cout << "\nStudent Added Successfully!" << endl;
}

void displayStudents(vector<Student>& students)
{
    if (students.empty())
    {
        cout << "\nNo Students Found!" << endl;
        return;
    }

    for (int i = 0; i < students.size(); i++)
    {
        students[i].displayResult();
    }
}

void searchStudent(vector<Student>& students)
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID to Search: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getID() == id)
        {
            students[i].displayResult();

            found = true;

            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent Not Found!" << endl;
    }
}

int main()
{
    vector<Student> students;

    User user;

    int choice;

    while (true)
    {
        cout << "\n========== STUDENT GRADING SYSTEM ==========" << endl;

        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;

        cout << "Choose Option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            user.registerUser();

            break;

        case 2:

            if (user.loginUser())
            {
                int option;

                do
                {
                    cout << "\n========== MAIN MENU ==========" << endl;

                    cout << "1. Add Student" << endl;
                    cout << "2. Display All Students" << endl;
                    cout << "3. Search Student" << endl;
                    cout << "4. Logout" << endl;

                    cout << "Choose Option: ";
                    cin >> option;

                    switch (option)
                    {
                    case 1:

                        addStudent(students);

                        break;

                    case 2:

                        displayStudents(students);

                        break;

                    case 3:

                        searchStudent(students);

                        break;

                    case 4:

                        cout << "\nLogging Out..." << endl;

                        break;

                    default:

                        cout << "\nInvalid Choice!" << endl;
                    }

                } while (option != 4);
            }

            break;

        case 3:

            cout << "\nProgram Closed." << endl;

            return 0;

        default:

            cout << "\nInvalid Choice!" << endl;
        }
    }

    return 0;
}
