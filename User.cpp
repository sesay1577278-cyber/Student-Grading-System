#include <iostream>
#include <fstream>
#include "User.h"

using namespace std;

void User::registerUser()
{
    ofstream file("users.txt", ios::app);

    cout << "\n===== REGISTER =====" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    file << username << " " << password << endl;

    file.close();

    cout << "\nRegistration Successful!" << endl;
}

bool User::loginUser()
{
    string u;
    string p;

    string storedUser;
    string storedPass;

    ifstream file("users.txt");

    cout << "\n===== LOGIN =====" << endl;

    cout << "Enter Username: ";
    cin >> u;

    cout << "Enter Password: ";
    cin >> p;

    while (file >> storedUser >> storedPass)
    {
        if (u == storedUser && p == storedPass)
        {
            cout << "\nLogin Successful!" << endl;

            file.close();

            return true;
        }
    }

    file.close();

    cout << "\nInvalid Username or Password!" << endl;

    return false;
}
