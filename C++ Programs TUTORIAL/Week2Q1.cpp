#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the array

void insertElement(int arr[], int &size, int element) {
    if (size < MAX_SIZE) {
        arr[size++] = element;
        cout << "Element inserted successfully.\n";
    } else {
        cout << "Array is full. Cannot insert more elements.\n";
    }
}

void deleteElement(int arr[], int &size, int element) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            break;
        }
    }
    if (i < size) {
        for (int j = i; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        size--;
        cout << "Element deleted successfully.\n";
    } else {
        cout << "Element not found in the array.\n";
    }
}

void searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            cout << "Element found at index " << i << "\n";
            return;
        }
    }
    cout << "Element not found in the array.\n";
}

void displayElements(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void sortArray(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty. Nothing to sort.\n";
        return;
    }
    sort(arr, arr + size);
    cout << "Array sorted successfully.\n";
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Delete an element\n";
        cout << "3. Search for an element\n";
        cout << "4. Display all elements\n";
        cout << "5. Sort the array\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                insertElement(arr, size, element);
                break;
            case 2:
                cout << "Enter element to delete: ";
                cin >> element;
                deleteElement(arr, size, element);
                break;
            case 3:
                cout << "Enter element to search: ";
                cin >> element;
                searchElement(arr, size, element);
                break;
            case 4:
                displayElements(arr, size);
                break;
            case 5:
                sortArray(arr, size);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
