#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentID;
    string name;
    float marks[5];

public:
    Student(string id, string studentName, float studentMarks[5]) {
        studentID = id;
        name = studentName;
        for (int i = 0; i < 5; i++) {
            marks[i] = studentMarks[i];
        }
    }

    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5;
    }

    void displayDetails() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
};

int main() {
    float marks1[5] = {85, 90, 78, 92, 88};
    float marks2[5] = {75, 80, 70, 85, 82};

    Student student1("S101", "Alice", marks1);
    Student student2("S102", "Bob", marks2);

    cout << "Student Details:\n";
    student1.displayDetails();
    cout << endl;
    student2.displayDetails();

    return 0;
}