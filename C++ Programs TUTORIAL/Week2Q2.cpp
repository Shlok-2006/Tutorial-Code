#include <iostream>
#include <limits>
using namespace std;

void enterMarks(int marks[], int N) {
    cout << "Enter marks for " << N << " students:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void calculateAverage(int marks[], int N) {
    if (N == 0) {
        cout << "No students in the class.\n";
        return;
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += marks[i];
    }
    double average = static_cast<double>(sum) / N;
    cout << "Average marks: " << average << endl;
}

void findHighestLowest(int marks[], int N) {
    if (N == 0) {
        cout << "No students in the class.\n";
        return;
    }
    int highest = marks[0], lowest = marks[0];
    for (int i = 1; i < N; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    cout << "Highest marks: " << highest << "\n";
    cout << "Lowest marks: " << lowest << "\n";
}

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;
    if (N <= 0) {
        cout << "Invalid number of students.\n";
        return 1;
    }
    
    int marks[N];
    int choice;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Enter marks\n";
        cout << "2. Calculate average marks\n";
        cout << "3. Find highest and lowest marks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enterMarks(marks, N);
                break;
            case 2:
                calculateAverage(marks, N);
                break;
            case 3:
                findHighestLowest(marks, N);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
