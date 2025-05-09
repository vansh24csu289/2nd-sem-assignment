#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    float cgpa;
    vector<string> enrolledCourses;
    Student(string studentName, int roll, float studentCGPA, vector<string> courses)
        : name(studentName), rollNumber(roll), cgpa(studentCGPA), enrolledCourses(courses) {}
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Courses: ";
        for (const string &course : enrolledCourses) {
            cout << course << " ";
        }
        cout << endl;
    }
    void addCourse(string course) {
        enrolledCourses.push_back(course);
    }
    void updateCGPA(float newCGPA) {
        cgpa = newCGPA;
    }
};
class StudentManagementSystem {
public:
    vector<Student> students;
    void addStudent(Student student) {
        students.push_back(student);
    }
    void searchStudent(int rollNumber) {
        for (const Student &student : students) {
            if (student.rollNumber == rollNumber) {
                cout << "Student found:\n";
                Student.displayInfo();
                return;
            }
        }
        cout << "Student not found!\n";
    }
    void displayAllStudents() {
        for (const Student &student : students) {
            students.displayInfo();
            cout << "----------------\n";
        }
    }
};
int main() {
    StudentManagementSystem system;
    system.addStudent(Student("Alice", 101, 3.8, {"Math", "Physics"}));
    system.addStudent(Student("Bob", 102, 4.2, {"English", "Biology"}));
    cout << "All Student Records:\n";
    system.displayAllStudents();
    cout << "\nSearching for Roll Number 101:\n";
    system.searchStudent(101);
    cout << "\nUpdating CGPA for Alice:\n";
    system.students[0].updateCGPA(9.0);
    system.students[0].displayInfo();
    cout << "\nAdding a course for Bob:\n";
    system.students[1].addCourse("History");
    system.students[1].displayInfo();
    return 0;
}
