#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Class to manage major degree information
class MajorDegree {
public:
    void displayDegreeMenu() {
        int degreeSelection;
        cout << "\nSelect a major degree:"
             << "\n1. Arts"
             << "\n2. Business"
             << "\n3. Computer Science"
             << "\n4. Cyber Security"
             << "\n5. Nursing"
             << "\nEnter your choice (1-5): ";
        cin >> degreeSelection;
        cin.ignore();
        system("cls");
        displayMajor(degreeSelection);
        system("pause");
        system("cls");
    }

    void displayMajor(int majorCode) {
        string fileName;
        string majorName;
        switch (majorCode) {
            case 1:
                fileName = "Arts.txt";
                majorName = "Arts";
                break;
            case 2:
                fileName = "Business.txt";
                majorName = "Business";
                break;
            case 3:
                fileName = "ComputerScience.txt";
                majorName = "Computer Science";
                break;
            case 4:
                fileName = "CyberSec.txt";
                majorName = "Cyber Security";
                break;
            case 5:
                fileName = "Nursing.txt";
                majorName = "Nursing";
                break;
            default:
                cout << "Invalid choice!" << endl;
                return;
        }

        ifstream degreeFile(fileName);
        cout << majorName << " Courses" << endl;
        cout << "-------------------" << endl;
        
        string course;
        while (getline(degreeFile, course)) {
            cout << course << endl;
        }
        degreeFile.close();
    }
};

// Class to manage student information
class Student {
public:
    string name;
    string major;

    Student(string n, string m) : name(n), major(m) {}
};

class StudentsDatabase {
private:
    vector<Student> students;

public:
    StudentsDatabase() {
        generateRandomStudents();
    }

    void generateRandomStudents() {
        srand(time(0));
        string majors[] = {"Arts", "Business", "Computer Science", "Cyber Security", "Nursing"};
        int numMajors = sizeof(majors) / sizeof(majors[0]);

        for (int i = 0; i < 20; ++i) {
            int randomMajorIndex = rand() % numMajors;
            Student student("Student " + to_string(i + 1), majors[randomMajorIndex]);
            students.push_back(student);
        }
    }

    void displayStudentsMenu() {
        system("cls");
        cout << "Student Database" << endl;
        cout << "-------------------" << endl;

        int count = 1;
        for (const Student& student : students) {
            cout << count++ << ". " << student.name << " - " << student.major << endl;
        }
        system("pause");
        system("cls");
    }
};

int main() {
    int choice;
    MajorDegree majorDegree;
    StudentsDatabase studentsDatabase;

    system("title Major Plan");

    do {
        cout << "\nMain Menu:"
             << "\n1. Major Degree"
             << "\n2. Students"
             << "\n3. Courses"
             << "\n4. Save & Exit"
             << "\n\nEnter your choice (1-4): ";
        cin >> choice;
        system("cls");

        switch (choice) {
            case 1:
                majorDegree.displayDegreeMenu();
                break;
            case 2:
                studentsDatabase.displayStudentsMenu();
                break;
            case 3:
                for (int i = 1; i <= 5; ++i) {
                    majorDegree.displayMajor(i);
                    cout << endl;
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "Invalid input... GOOD-BYE!" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
