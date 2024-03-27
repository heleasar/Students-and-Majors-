Rewrite this code that includes random 20 students with varied majors and 20 courses with varied rubrics including different professors from the main 5 majors, Computer Science, Criminal Justice, Biology, Business, Cuber Security.                                                                                                                     
 #include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class MajorDegree {
Adv C++/Java Project Project Plan: Project (Team)
2
public:
 void degreemenu() {
 int degreeselection;
 cout << "\n1. Arts"
 << "\n2. Bussines "
 << "\n3. Computer Science"
 << "\n4. Cyber Security"
 << "\n5. Nursing"
 << "\n Enter your choice (1-5): ";
 cin >> degreeselection;
 system("cls");
 DisplayMajor(degreeselection);
 cin.get();
 cin.get();
 system("cls");
 }
 void DisplayMajor(int OP) {
 string major;
 if (OP == 1) {
 ifstream Degree("Arts.txt");
 cout << "Arts Courses" << endl;
 cout << "-------------------" << endl;
 int i = 0;
 while (!Degree.eof()) {
 getline(Degree, major);
 cout << major << "\n";
 }
 }
 else if (OP == 2) {
 ifstream Degree("Bussines.txt");
 cout << "Bussines Courses " << endl;
 cout << "-------------------" << endl;
 int i = 0;
 while (!Degree.eof()) {
 getline(Degree, major);
 cout << major << "\n";
 }
 }
 else if (OP == 3) {
 ifstream Degree("ComputerScience.txt");
 cout << "ComputerScience Courses" << endl;
 cout << "-------------------" << endl;
 int i = 0;
 while (!Degree.eof()) {
 getline(Degree, major);
 cout << major << "\n";
 }
 }
 else if (OP == 4) {
 ifstream Degree("CyberSec.txt");
 cout << "Cyber Security Courses" << endl;
 cout << "-------------------" << endl;
 int i = 0;
Adv C++/Java Project Project Plan: Project (Team)
3
 while (!Degree.eof()) {
 getline(Degree, major);
 cout << major << "\n";
 }
 }
 else if (OP == 5) {
 ifstream Degree("Nursing.txt");
 cout << "Nursing Courses" << endl;
 cout << "-------------------" << endl;
 int i = 0;
 while (!Degree.eof()) {
 getline(Degree, major);
 cout << major << "\n";
 }
 }
 }
};
class Students {
public:
 void studentsmenu() {
 int studentselection;
 DisplayStudents();
 }
 void DisplayStudents() {
 ifstream Degree("default.txt");
 string major;
 system("cls");
 cout << "Student database" << endl;
 cout << "-------------------" << endl;
 int i = 1;
 while (!Degree.eof()) {
 getline(Degree, major);
 cout << i++ << " " << major << "\n";
 }
 system("pause");
 system("cls");
 cin.get();
 }
};
int main() {
 // Variable for menu and class objects to call //
 int choice;
 MajorDegree degreefunc;
 Students studentfunc;
 // Program title //
 system("title Major Plan");
 // Main menu //
 do {
 cout << "\n1. Major Degree"
 << "\n2. Students"
 << "\n3. Courses"
 << "\n4. Save & Exit"
 << "\n\nEnter your Choice (1-4): ";
 cin >> choice;
Adv C++/Java Project Project Plan: Project (Team)
4
 system("cls");
 // Menu choice //
 // Menu: Fernando Hernandez //
 switch (choice) {
 case 1:
 degreefunc.degreemenu();
 break;
 case 2:
 studentfunc.studentsmenu();
 break;
 case 3:
 degreefunc.DisplayMajor(1);
 cout << endl;
 degreefunc.DisplayMajor(2);
 cout << endl;
 degreefunc.DisplayMajor(3);
 cout << endl;
 degreefunc.DisplayMajor(4);
 cout << endl;
 degreefunc.DisplayMajor(5);
 break;
 case 4:
 exit(0);
 break;
 default:
 cout << "Invalid input... GOOD-BYE!";
 break;
 }
 } while (choice != 5);   
