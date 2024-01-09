// when the program runs properly -> return 0
// when you get an error -> return -1
#include <stdio.h> // header file imports functions like printf etc....

#define MAX_SIZE 100 // global variable accessible from anywhere you want in this file

// Function to display the elements of the array
void displayArray(int arr[], int size) { 
    /*
    Inputs:
    arr-> integer array
    size ->integer (size of the array)
    */

    printf("Array elements: ");
    for (int i = 0; i < size; ++i) { //for(initialization, condition, increment)
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element into the array at a given position
int insertElement(int arr[], int *size, int element, int position) {
    /*
    Inputs:
    arr -> integer array
    size -> pointer (size of the array)
    element -> integer (element to store in array)
    position -> integer (position to enter at)
    */

    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return -1;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return -1;
    }

    for (int i = *size - 1; i >= position; --i) { 
        //moves elements to right to make place for inserting the element
        arr[i + 1] = arr[i];
    }

    arr[position] = element; // inserting element at the position
    (*size)++;

    printf("Element inserted successfully.\n");
    return 0;
}

// Function to delete an element from the array at a given position
int deleteElement(int arr[], int *size, int position) {
    /*
    Inputs:
    arr -> integer array
    size -> pointer (size of the array)
    position -> integer (position to enter at)
    */
    if (*size <= 0) {
        printf("Array is empty. Cannot delete.\n");
        return -1;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return -1;
    }

    for (int i = position; i < *size - 1; ++i) {
        arr[i] = arr[i + 1]; // moving from left to right in order to delete the element at position
    }

    (*size)--; // since an element is deleted the size of the array is 1 less
    printf("Element deleted successfully.\n");
    return 0;
}

int main() {
    int array[MAX_SIZE];
    int size = 0;

    // Inserting elements into the array
    insertElement(array, &size, 10, 0);
    insertElement(array, &size, 20, 1);
    insertElement(array, &size, 30, 2);
    insertElement(array, &size, 40, 3);

    // Displaying the array elements
    displayArray(array, size);

    // Deleting an element from the array
    deleteElement(array, &size, 2);
    // Displaying the updated array elements after deletion
    displayArray(array, size);
    return 0;
}
