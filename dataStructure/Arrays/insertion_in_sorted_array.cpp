#include <iostream>
using namespace std;

// Function to insert an element into a sorted array
void insert_sort_array(int arr[], int item, int n) {
    int k;

    // Loop to find the correct position to insert the new element
    for (k = n - 1; arr[k] > item; k--) {
        arr[k + 1] = arr[k]; // Shift elements to the right
    }

    arr[k + 1] = item; // Insert the new element at the correct position
    n++; // Increase the count of elements in the array
    cout << "Insertion Successful" << endl;
}

int main() {
    int arr[10] = {3, 9, 11, 17, 22}; // Sorted array
    int n = 5; // Number of elements in the array
    int item; // Variable to store the integer value entered by the user

    cout << "Enter an integer to insert in an array : ";
    cin >> item; // Read the integer from the user

    // Call the function to insert the new element into the array
    insert_sort_array(arr, item, n);

    // Print the updated array after the insertion
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
