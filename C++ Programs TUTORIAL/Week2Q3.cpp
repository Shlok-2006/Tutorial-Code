#include <iostream>
using namespace std;

void reverseArray(int *arr, int N) {
    int *start = arr;
    int *end = arr + N - 1;
    while (start < end) {
        // Swap using pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        // Move pointers
        start++;
        end--;
    }
}

void displayArray(int *arr, int N) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    
    if (N <= 0) {
        cout << "Invalid array size.\n";
        return 1;
    }
    
    int arr[N];
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    cout << "Original array: ";
    displayArray(arr, N);
    
    reverseArray(arr, N);
    
    cout << "Reversed array: ";
    displayArray(arr, N);
    
    return 0;
}
